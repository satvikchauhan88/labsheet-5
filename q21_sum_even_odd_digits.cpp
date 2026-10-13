#include <iostream>
using namespace std;

int main() {
    int number, evenDigitSum = 0, oddDigitSum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int temp = number; temp > 0; temp /= 10) {
        int digit = temp % 10;
        if (digit % 2 == 0)
            evenDigitSum += digit;
        else
            oddDigitSum += digit;
    }

    cout << "Sum of even digits = " << evenDigitSum << endl;
    cout << "Sum of odd digits  = " << oddDigitSum << endl;
    return 0;
}
