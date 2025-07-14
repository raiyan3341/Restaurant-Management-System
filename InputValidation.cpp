//input.cpp
#include "InputValidation.h"
#include <iostream>
#include <limits>
using namespace std;
void clearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int getValidIntInput(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            clearInputBuffer();
        } else {
            clearInputBuffer();
            return value;
        }
    }
}
double getValidDoubleInput(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            clearInputBuffer();
        } else {
            clearInputBuffer();
            return value;
        }
    }
}
double convertDollarToBDT(double dollarAmount, double exchangeRate) {
    return dollarAmount * exchangeRate;
}

