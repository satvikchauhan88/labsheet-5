#include <iostream>
using namespace std;

int main() {
    int number, factorialSum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int temp = number; temp > 0; temp /= 10) {
        int digit = temp % 10;
        int digitFactorial = 1;
        for (int count = 2; count <= digit; count++)
            digitFactorial *= count;
        factorialSum += digitFactorial;
    }

    if (factorialSum == number)
        cout << number << " is a strong number." << endl;
    else
        cout << number << " is not a strong number." << endl;
    return 0;
}
