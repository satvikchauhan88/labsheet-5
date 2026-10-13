#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    int counter = 1;
    while (counter <= number) {
        factorial *= counter;
        counter++;
    }

    cout << "Factorial of " << number << " = " << factorial << endl;
    return 0;
}
