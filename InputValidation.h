//input.h
#ifndef INPUT_VALIDATION_H 
#define INPUT_VALIDATION_H
#include <string> 

int getValidIntInput(const std::string& prompt);
double getValidDoubleInput(const std::string& prompt);
void clearInputBuffer();
double convertDollarToBDT(double dollarAmount, double exchangeRate = 110.0);

#endif 
