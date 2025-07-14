//customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "menu.h" 
#include "order.h" 
#include <iostream>
#include <vector>

class Customer {
public:
    void customerPanel(Menu& menu, std::vector<float>& sales);
};

#endif

