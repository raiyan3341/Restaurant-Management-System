//admin.cpp
#include "admin.h"        
#include "InputValidation.h" 
#include <iostream>       
#include <numeric>        
#include <iomanip>       

using namespace std; 

void Admin::adminPanel(Menu& menu) {
    int adminChoice;
    do {
        cout << "\n--- Admin Panel ---" << endl;
        cout << "1. View Menu" << endl;
        cout << "2. View Menu by Category" << endl;
        cout << "3. Add New Menu Item" << endl;
        cout << "4. Edit Menu Item" << endl;
        cout << "5. Delete Menu Item" << endl;
        cout << "6. View Low Stock Items" << endl;
        cout << "0. Back to Main Menu" << endl;
        adminChoice = getValidIntInput("Enter your choice: ");

        switch (adminChoice) {
            case 1: menu.showMenu(); break;
            case 2: menu.showMenuByCategory(); break;
            case 3: menu.addMenuItem(); break;
            case 4: menu.editMenuItem(); break;
            case 5: menu.deleteMenuItem(); break;
            case 6: menu.showLowStock(); break;
            case 0: cout << "Exiting Admin Panel.\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (adminChoice != 0);
}

void Admin::viewSalesReport(const vector<float>& sales) {
    cout << "\n--- Sales Report ---" << endl;
    if (sales.empty()) {
        cout << "No sales recorded yet.\n";
    } else {
        float totalSales = accumulate(sales.begin(), sales.end(), 0.0f); // Sums all sales amounts
        cout << fixed << setprecision(2);
        cout << "Total Sales: $" << totalSales << endl;
        cout << "Number of Orders Processed: " << sales.size() << endl;

    }
    cout << "---------------------\n";
}

