#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int temp = number; temp > 0; temp /= 10)
        reversedNumber = reversedNumber * 10 + temp % 10;

    cout << "Reverse of the number = " << reversedNumber << endl;

    if (reversedNumber == number)
        cout << number << " is a palindrome." << endl;
    else
        cout << number << " is not a palindrome." << endl;
    return 0;
}
