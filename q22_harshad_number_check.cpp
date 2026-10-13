#include <iostream>
using namespace std;

int main() {
    int number, digitSum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int temp = number; temp > 0; temp /= 10)
        digitSum += temp % 10;

    if (digitSum != 0 && number % digitSum == 0)
        cout << number << " is a Harshad number." << endl;
    else
        cout << number << " is not a Harshad number." << endl;
    return 0;
}
