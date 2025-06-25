#ifndef ORDER_H
#define ORDER_H
#include "menu.h" 
#include <vector>
#include <iostream> 

struct OrderItem {
    MenuItem item;
    int quantity; 
    OrderItem(MenuItem i, int q) : item(i), quantity(q) {}
};

class Order {
private:
    std::vector<OrderItem> items; 
    float currentTotal;           
public:
    Order() : currentTotal(0.0f) {} 
    void addItem(MenuItem item, int qty); 
    void showCurrentOrder();          
    void showBill();                  
    float getTotal();                 
};

#endif
