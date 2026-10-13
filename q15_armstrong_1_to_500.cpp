#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500: ";
    for (int number = 1; number <= 500; number++) {
        int digitCount = 0;
        long long armstrongSum = 0;

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
            cout << number << " ";
    }
    cout << endl;
    return 0;
}
