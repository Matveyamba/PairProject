// main.cpp
#include <iostream>
#include "func.h"

using namespace std;

int main() {
    double a, b;
    char operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << Func::add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << Func::subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << Func::multiply(a, b) << endl;
            break;
        case '/':
            cout << "Result: " << Func::divide(a, b) << endl;
            break;
        default:
            cout << "Incorrect operation!" << endl;
            break;
    }

    return 0;
}