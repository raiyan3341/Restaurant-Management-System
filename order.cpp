#include "order.h"    
#include <iomanip>   
using namespace std; 


void Order::addItem(MenuItem item, int qty) {
    bool found = false;
    for (auto& oi : items) {
        if (oi.item.id == item.id) {
            oi.quantity += qty;
            found = true;
            break;
        }
    }
    if (!found) {
        items.push_back(OrderItem(item, qty)); 
    }
    currentTotal += item.price * qty; 
    cout << qty << " x " << item.name << " added to order.\n";
}

void Order::showCurrentOrder() {
    cout << "\n--- Your Current Order ---" << endl;
    cout << fixed << setprecision(2); 

    if (items.empty()) {
        cout << "Your order is empty.\n";
        return;
    }

    cout << setw(5) << left << "Qty"
              << setw(25) << left << "Item"
              << setw(10) << left << "Unit Price"
              << setw(10) << left << "Subtotal" << endl;
    cout << "-------------------------------------------------------\n";

    for (const auto& oi : items) {
        float subtotal = oi.item.price * oi.quantity;
        cout << setw(5) << left << oi.quantity
                  << setw(25) << left << oi.item.name
                  << "BDT " << setw(7) << left << oi.item.price 
                  << "BDT " << setw(7) << left << subtotal << endl; 
    }
    cout << "-------------------------------------------------------\n";
    cout << "Total: BDT " << currentTotal << endl; 
    cout << "-------------------------------------------------------\n";
}

void Order::showBill() {
    cout << "\n--- Your Bill ---" << endl;
    cout << fixed << setprecision(2);

    if (items.empty()) {
        cout << "No items in this bill.\n";
        return;
    }


    cout << setw(5) << left << "Qty"
              << setw(25) << left << "Item"
              << setw(10) << left << "Unit Price"
              << setw(10) << left << "Subtotal" << endl;
    cout << "-------------------------------------------------------\n";

    for (const auto& oi : items) {
        float subtotal = oi.item.price * oi.quantity;
        cout << setw(5) << left << oi.quantity
                  << setw(25) << left << oi.item.name
                  << "BDT " << setw(7) << left << oi.item.price 
                  << "BDT " << setw(7) << left << subtotal << endl; 
    }
    cout << "-------------------------------------------------------\n";
    cout << "Total Amount: BDT " << currentTotal << endl; 
    cout << "Thank you for your purchase!\n";
    cout << "-------------------------------------------------------\n";
}

float Order::getTotal() {
    return currentTotal;
}
