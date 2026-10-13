#include <iostream>
using namespace std;

int main() {
    int number, digitCount = 0;
    long long armstrongSum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int temp = number; temp > 0; temp /= 10)
        digitCount++;

    for (int temp = number; temp > 0; temp /= 10) {
        int digit = temp % 10;
        long long power = 1;
        for (int count = 0; count < digitCount; count++)
            power *= digit;
        armstrongSum += power;
    }

    if (armstrongSum == number)
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;
    return 0;
}
