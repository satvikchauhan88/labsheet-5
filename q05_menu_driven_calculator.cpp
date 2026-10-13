#include <iostream>
using namespace std;

int main() {
    double firstNumber, secondNumber;
    char operation;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> secondNumber;

    switch (operation) {
        case '+':
            cout << "Result = " << firstNumber + secondNumber << endl;
            break;
        case '-':
            cout << "Result = " << firstNumber - secondNumber << endl;
            break;
        case '*':
            cout << "Result = " << firstNumber * secondNumber << endl;
            break;
        case '/':
            if (secondNumber != 0)
                cout << "Result = " << firstNumber / secondNumber << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
    }
    return 0;
}
