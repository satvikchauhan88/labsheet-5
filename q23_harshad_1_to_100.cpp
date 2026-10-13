#include <iostream>
using namespace std;

int main() {
    cout << "Harshad numbers between 1 and 100: ";
    for (int number = 1; number <= 100; number++) {
        int digitSum = 0;
        for (int temp = number; temp > 0; temp /= 10)
            digitSum += temp % 10;
        if (number % digitSum == 0)
            cout << number << " ";
    }
    cout << endl;
    return 0;
}
