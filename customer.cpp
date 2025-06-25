
#include "customer.h"     
#include "InputValidation.h" 
#include <limits>         
using namespace std;


void Customer::customerPanel(Menu& menu, vector<float>& sales) {
    int customerChoice;
    do {
        cout << "\n--- Customer Panel ---" << endl;
        cout << "1. View Full Menu" << endl;
        cout << "2. View Menu by Category" << endl;
        cout << "3. Place New Order" << endl;
        cout << "0. Back to Main Menu" << endl;
        customerChoice = getValidIntInput("Enter your choice: ");

        switch (customerChoice) {
            case 1:
                menu.showMenu();
                break;
            case 2:
                menu.showMenuByCategory();
                break;
            case 3: {
                Order currentOrder;
                int itemId, quantity;
                bool placingOrder = true;

                cout << "\n--- Start New Order ---" << endl;
                menu.showMenu();

                while (placingOrder) {
                    itemId = getValidIntInput("Enter Item ID to order (0 to finish order): ");
                    if (itemId == 0) {
                        placingOrder = false;
                        break;
                    }

                    MenuItem* selectedItem = menu.getItemById(itemId);
                    if (selectedItem) {
                        if (selectedItem->stock > 0) {
                            quantity = getValidIntInput("Enter Quantity: ");
                            if (quantity > 0 && quantity <= selectedItem->stock) {
                                currentOrder.addItem(*selectedItem, quantity);
                                menu.updateStock(selectedItem->id, -quantity);
                            } else if (quantity > selectedItem->stock) {
                                cout << "Not enough stock. Only " << selectedItem->stock << " available.\n";
                            } else {
                                cout << "Quantity must be positive.\n";
                            }
                        } else {
                            cout << "Sorry, '" << selectedItem->name << "' is out of stock.\n";
                        }
                    } else {
                        cout << "Item with ID " << itemId << " not found.\n";
                    }
                }

                if (currentOrder.getTotal() > 0) {
                    currentOrder.showBill();
                    sales.push_back(currentOrder.getTotal());
                } else {
                    cout << "Order cancelled as no items were purchased.\n";
                }
                break;
            }
            case 0:
                cout << "Exiting Customer Panel.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (customerChoice != 0);
}

