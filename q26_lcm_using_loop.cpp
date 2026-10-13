#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    int lcm = (firstNumber > secondNumber) ? firstNumber : secondNumber;
    while (true) {
        if (lcm % firstNumber == 0 && lcm % secondNumber == 0)
            break;
        lcm++;
    }

    cout << "LCM = " << lcm << endl;
    return 0;
}
