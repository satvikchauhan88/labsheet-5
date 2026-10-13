#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, gcd = 1;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    int smallerNumber = (firstNumber < secondNumber) ? firstNumber : secondNumber;
    for (int divisor = 1; divisor <= smallerNumber; divisor++)
        if (firstNumber % divisor == 0 && secondNumber % divisor == 0)
            gcd = divisor;

    cout << "GCD = " << gcd << endl;
    return 0;
}
