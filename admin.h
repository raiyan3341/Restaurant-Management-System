//admin.h
#ifndef ADMIN_H
#define ADMIN_H
#include "menu.h" 
#include <vector>

class Admin {
public:
    void adminPanel(Menu& menu); 
    void viewSalesReport(const std::vector<float>& sales); 
};

#endif
