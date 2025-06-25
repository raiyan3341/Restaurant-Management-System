#include <iostream>    
#include <vector>       
#include "menu.h"       
#include "order.h"      
#include "admin.h"      
#include "customer.h"  
#include "InputValidation.h" 
using namespace std;


int main() {
    Menu menu;
    menu.loadSampleMenu();

    vector<float> salesHistory;
    int userType; 

    do {
        cout << "    Welcome To Raiyan Cafate    " << endl;
        cout << "\n--- Restaurant Management System Main Menu ---" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Customer" << endl;
        cout << "3. View Sales Report (Global)" << endl; 
        cout << "0. Exit" << endl;
        userType = getValidIntInput("Choose user type: ");

        
        switch (userType) {
            case 1: { 
                Admin admin; 
                admin.adminPanel(menu); 
                break;
            }
            case 2: { 
                Customer customer; 
                customer.customerPanel(menu, salesHistory);
                break;
            }
            case 3: { 
                Admin tempAdmin; 
                tempAdmin.viewSalesReport(salesHistory);
                break;
            }
            case 0:
                cout << "Thank you for using the system!\n"; 
                break;
            default:
                cout << "Invalid choice. Please try again.\n"; 
        }
    } while (userType != 0); 

    return 0;
}



