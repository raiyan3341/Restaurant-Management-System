// FILE: menu.h
#ifndef MENU_H
#define MENU_H
#include <string>
#include <vector>
#include <iostream>

struct MenuItem {
    int id;
    std::string name;
    float price;
    std::string category;
    int stock;
};

class Menu {
private:
    std::vector<MenuItem> items;
    int nextId = 101;
public:
    void loadSampleMenu();
    void showMenu();
    void showMenuByCategory();
    MenuItem* getItemById(int id);
    void updateStock(int id, int qty);
    void showLowStock();
    void addMenuItem();
    void editMenuItem();
    void deleteMenuItem();
};

#endif

