#include "menu.h"         
#include "InputValidation.h" 
#include <iomanip>        
#include <limits>         
using namespace std; 

void Menu::loadSampleMenu() {
   
    items.push_back({nextId++, "Classic Burger", 350.00f, "Main Course", 20});
    items.push_back({nextId++, "Cheeseburger", 420.00f, "Main Course", 15});
    items.push_back({nextId++, "French Fries", 120.00f, "Side Dish", 50});
    items.push_back({nextId++, "Soft Drink", 60.00f, "Beverage", 100});
    items.push_back({nextId++, "Margherita Pizza", 750.00f, "Main Course", 10});
    items.push_back({nextId++, "Caesar Salad", 300.00f, "Salad", 12});
    items.push_back({nextId++, "Chocolate Cake", 250.00f, "Dessert", 8});

    items.push_back({nextId++, "Grilled Salmon with Asparagus", 950.00f, "Main Course", 10});
    items.push_back({nextId++, "Spaghetti Carbonara", 680.00f, "Main Course", 18});
    items.push_back({nextId++, "Chicken Tikka Masala", 790.00f, "Main Course", 14});
    items.push_back({nextId++, "Vegetable Lasagna", 620.00f, "Main Course", 12});
    items.push_back({nextId++, "Beef Steak with Mashed Potatoes", 1200.00f, "Main Course", 8});
    items.push_back({nextId++, "Shrimp Scampi Pasta", 880.00f, "Main Course", 9});
    items.push_back({nextId++, "Falafel Platter", 550.00f, "Main Course", 16});
    items.push_back({nextId++, "Lamb Chops with Mint Sauce", 1150.00f, "Main Course", 7});
    items.push_back({nextId++, "Mushroom Risotto", 720.00f, "Main Course", 11});
    items.push_back({nextId++, "Tandoori Chicken", 780.00f, "Main Course", 13});
    items.push_back({nextId++, "Sushi Platter (Assorted)", 1050.00f, "Main Course", 6});
    items.push_back({nextId++, "Vegan Buddha Bowl", 580.00f, "Main Course", 15});
    items.push_back({nextId++, "Pork Ribs BBQ", 980.00f, "Main Course", 9});
    items.push_back({nextId++, "Fish and Chips", 650.00f, "Main Course", 17});
    items.push_back({nextId++, "Chicken Alfredo", 700.00f, "Main Course", 16});
    items.push_back({nextId++, "Beyond Burger (Vegan)", 600.00f, "Main Course", 10});
    items.push_back({nextId++, "Duck Confit", 1180.00f, "Main Course", 5});
    items.push_back({nextId++, "Seafood Paella", 1250.00f, "Main Course", 8});
    items.push_back({nextId++, "Chicken Parmesan", 770.00f, "Main Course", 14});
    items.push_back({nextId++, "Gourmet Mac & Cheese", 530.00f, "Main Course", 20});

    items.push_back({nextId++, "Garlic Bread", 90.00f, "Side Dish", 60});
    items.push_back({nextId++, "Onion Rings", 150.00f, "Side Dish", 45});
    items.push_back({nextId++, "Coleslaw", 100.00f, "Side Dish", 70});
    items.push_back({nextId++, "Sweet Potato Fries", 160.00f, "Side Dish", 40});
    items.push_back({nextId++, "Steamed Vegetables", 120.00f, "Side Dish", 30});
    items.push_back({nextId++, "Mashed Potatoes", 130.00f, "Side Dish", 35});
    items.push_back({nextId++, "Side Salad", 180.00f, "Side Dish", 25});
    items.push_back({nextId++, "Rice Pilaf", 110.00f, "Side Dish", 55});
    items.push_back({nextId++, "Corn on the Cob", 90.00f, "Side Dish", 65});
    items.push_back({nextId++, "Loaded Baked Potato", 220.00f, "Side Dish", 20});
    items.push_back({nextId++, "Creamed Spinach", 155.00f, "Side Dish", 18});
    items.push_back({nextId++, "Grilled Asparagus", 200.00f, "Side Dish", 15});
    items.push_back({nextId++, "Mac & Cheese Side", 145.00f, "Side Dish", 22});
    items.push_back({nextId++, "Quinoa Salad", 240.00f, "Side Dish", 10});
    items.push_back({nextId++, "Cheesy Garlic Bread", 135.00f, "Side Dish", 30});
    items.push_back({nextId++, "Truffle Fries", 210.00f, "Side Dish", 25});
    items.push_back({nextId++, "Fried Pickles", 180.00f, "Side Dish", 18});
    items.push_back({nextId++, "Roasted Brussels Sprouts", 170.00f, "Side Dish", 20});
    items.push_back({nextId++, "Breadsticks with Marinara", 120.00f, "Side Dish", 40});
    items.push_back({nextId++, "Crispy Potato Wedges", 140.00f, "Side Dish", 35});

    items.push_back({nextId++, "Coca-Cola", 60.00f, "Beverage", 120});
    items.push_back({nextId++, "Sprite", 60.00f, "Beverage", 110});
    items.push_back({nextId++, "Orange Juice (Fresh)", 120.00f, "Beverage", 50});
    items.push_back({nextId++, "Apple Juice", 100.00f, "Beverage", 60});
    items.push_back({nextId++, "Espresso", 90.00f, "Beverage", 90});
    items.push_back({nextId++, "Cappuccino", 130.00f, "Beverage", 80});
    items.push_back({nextId++, "Latte", 140.00f, "Beverage", 75});
    items.push_back({nextId++, "Iced Tea (Lemon)", 90.00f, "Beverage", 100});
    items.push_back({nextId++, "Green Tea (Hot)", 80.00f, "Beverage", 70});
    items.push_back({nextId++, "Mineral Water", 50.00f, "Beverage", 150});
    items.push_back({nextId++, "Sparkling Water", 90.00f, "Beverage", 100});
    items.push_back({nextId++, "Strawberry Smoothie", 180.00f, "Beverage", 30});
    items.push_back({nextId++, "Mango Lassi", 160.00f, "Beverage", 25});
    items.push_back({nextId++, "Lemonade", 95.00f, "Beverage", 90});
    items.push_back({nextId++, "Hot Chocolate", 120.00f, "Beverage", 60});
    items.push_back({nextId++, "Root Beer Float", 150.00f, "Beverage", 40});
    items.push_back({nextId++, "Mojito (Non-Alcoholic)", 200.00f, "Beverage", 20});
    items.push_back({nextId++, "Ginger Ale", 80.00f, "Beverage", 80});
    items.push_back({nextId++, "Chai Latte", 125.00f, "Beverage", 55});
    items.push_back({nextId++, "Fresh Lime Soda", 100.00f, "Beverage", 70});

    items.push_back({nextId++, "Apple Pie a la Mode", 280.00f, "Dessert", 10});
    items.push_back({nextId++, "Cheesecake (New York Style)", 300.00f, "Dessert", 9});
    items.push_back({nextId++, "Tiramisu", 260.00f, "Dessert", 7});
    items.push_back({nextId++, "Brownie Sundae", 240.00f, "Dessert", 11});
    items.push_back({nextId++, "Fruit Tart", 220.00f, "Dessert", 6});
    items.push_back({nextId++, "Creme Brulee", 310.00f, "Dessert", 5});
    items.push_back({nextId++, "Lava Cake", 290.00f, "Dessert", 8});
    items.push_back({nextId++, "Panna Cotta", 230.00f, "Dessert", 10});
    items.push_back({nextId++, "Banana Split", 320.00f, "Dessert", 7});
    items.push_back({nextId++, "Ice Cream Scoop (Vanilla)", 90.00f, "Dessert", 25});
    items.push_back({nextId++, "Ice Cream Scoop (Chocolate)", 90.00f, "Dessert", 22});
    items.push_back({nextId++, "Ice Cream Scoop (Strawberry)", 90.00f, "Dessert", 20});
    items.push_back({nextId++, "Key Lime Pie", 250.00f, "Dessert", 8});
    items.push_back({nextId++, "Red Velvet Cake", 270.00f, "Dessert", 9});
    items.push_back({nextId++, "Gelato (Pistachio)", 130.00f, "Dessert", 15});
    items.push_back({nextId++, "Affogato", 150.00f, "Dessert", 12});
    items.push_back({nextId++, "Churros with Chocolate Sauce", 180.00f, "Dessert", 14});
    items.push_back({nextId++, "Eclairs (Chocolate)", 165.00f, "Dessert", 10});
    items.push_back({nextId++, "Mochi (Assorted)", 210.00f, "Dessert", 13});
    items.push_back({nextId++, "Donut Selection", 200.00f, "Dessert", 18});
}

void Menu::showMenu() {
    cout << "\n--- Full Menu ---" << endl;
    cout << fixed << setprecision(2); 

    if (items.empty()) {
        cout << "No menu items available.\n";
        return;
    }

    cout << setw(5) << left << "ID"
              << setw(25) << left << "Name"
              << setw(10) << left << "Price"
              << setw(15) << left << "Category"
              << setw(8) << left << "Stock" << endl;
    cout << "-----------------------------------------------------------------------\n";

    for (const auto& item : items) {
        cout << setw(5) << left << item.id
                  << setw(25) << left << item.name
                  << "BDT " << setw(7) << left << item.price 
                  << setw(15) << left << item.category
                  << setw(8) << left << item.stock << endl;
    }
    cout << "-----------------------------------------------------------------------\n";
}

void Menu::showMenuByCategory() {
    if (items.empty()) {
        cout << "No menu items available to filter.\n";
        return;
    }

    string category;
    cout << "\nEnter category to filter by (e.g., Main Course, Beverage, Dessert): ";
    getline(cin, category); 

    cout << "\n--- Menu for Category: " << category << " ---" << endl;
    cout << fixed << setprecision(2);

    bool foundItems = false;
    cout << setw(5) << left << "ID"
              << setw(25) << left << "Name"
              << setw(10) << left << "Price"
              << setw(15) << left << "Category"
              << setw(8) << left << "Stock" << endl;
    cout << "-----------------------------------------------------------------------\n";

    for (const auto& item : items) {
        if (item.category == category) {
            cout << setw(5) << left << item.id
                      << setw(25) << left << item.name
                      << "BDT " << setw(7) << left << item.price 
                      << setw(15) << left << item.category
                      << setw(8) << left << item.stock << endl;
            foundItems = true;
        }
    }
    if (!foundItems) {
        cout << "No items found in category: " << category << "\n";
    }
    cout << "-----------------------------------------------------------------------\n";
}

MenuItem* Menu::getItemById(int id) {
    for (auto& item : items) { 
        if (item.id == id) {
            return &item; 
        }
    }
    return nullptr; 
}

void Menu::updateStock(int id, int qty) {
    MenuItem* item = getItemById(id);
    if (item) {
        item->stock += qty;
        if (item->stock < 0) {
            item->stock = 0;
        }
    }
}

void Menu::showLowStock() {
    cout << "\n--- Low Stock Items (Stock < 5) ---" << endl;
    cout << fixed << setprecision(2);

    bool lowStockFound = false;
    cout << setw(5) << left << "ID"
              << setw(25) << left << "Name"
              << setw(10) << left << "Price"
              << setw(15) << left << "Category"
              << setw(8) << left << "Stock" << endl;
    cout << "-----------------------------------------------------------------------\n";

    for (const auto& item : items) {
        if (item.stock < 5) { 
            cout << setw(5) << left << item.id
                      << setw(25) << left << item.name
                      << "BDT " << setw(7) << left << item.price 
                      << setw(15) << left << item.category
                      << setw(8) << left << item.stock << endl;
            lowStockFound = true;
        }
    }
    if (!lowStockFound) {
        cout << "No items currently have low stock.\n";
    }
    cout << "-----------------------------------------------------------------------\n";
}

void Menu::addMenuItem() {
    cout << "\n--- Add New Menu Item ---" << endl;
    string name, category;
    float price;
    int stock;

    cout << "Enter item name: ";
    getline(cin, name); 

    price = static_cast<float>(getValidDoubleInput("Enter item price (BDT): ")); 
    cout << "Enter item category (e.g., Main Course, Beverage, Dessert): ";
    getline(cin, category); 
    stock = getValidIntInput("Enter initial stock: ");

    items.push_back({nextId++, name, price, category, stock});
    cout << "Menu item '" << name << "' added successfully with ID " << (nextId - 1) << ".\n";
}

void Menu::editMenuItem() {
    showMenu(); 
    if (items.empty()) {
        cout << "No items to edit.\n";
        return;
    }

    int idToEdit = getValidIntInput("Enter ID of item to edit: ");
    MenuItem* item = getItemById(idToEdit);

    if (item) {
        cout << "\n--- Editing Item ID: " << item->id << " (" << item->name << ") ---" << endl;

        string newName, newCategory;
        float newPrice;
        int newStock;

        cout << "Enter new name (current: " << item->name << ", leave blank to keep): ";
        getline(cin, newName);
        if (!newName.empty()) {
            item->name = newName;
        }

        newPrice = static_cast<float>(getValidDoubleInput("Enter new price (BDT, current: BDT " + to_string(item->price) + "): ")); 
        item->price = newPrice;

        cout << "Enter new category (current: " << item->category << ", leave blank to keep): ";
        getline(cin, newCategory);
        if (!newCategory.empty()) {
            item->category = newCategory;
        }

        newStock = getValidIntInput("Enter new stock (current: " + to_string(item->stock) + "): ");
        item->stock = newStock;

        cout << "Menu item updated successfully.\n";
    } else {
        cout << "Menu item with ID " << idToEdit << " not found.\n";
    }
}

void Menu::deleteMenuItem() {
    showMenu(); 
    if (items.empty()) {
        cout << "No items to delete.\n";
        return;
    }

    int idToDelete = getValidIntInput("Enter ID of item to delete: ");

    bool found = false;
    auto it = items.begin();
    while (it != items.end()) {
        if (it->id == idToDelete) {
            cout << "Menu item '" << it->name << "' (ID: " << it->id << ") deleted successfully.\n";
            it = items.erase(it); 
            found = true;
            break;
        } else {
            ++it;
        }
    }
    if (!found) {
        cout << "Menu item with ID " << idToDelete << " not found.\n";
    }
}
