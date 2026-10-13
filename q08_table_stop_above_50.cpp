#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    for (int multiplier = 1; multiplier <= 10; multiplier++) {
        int product = number * multiplier;
        if (product > 50)
            break;
        cout << number << " x " << multiplier << " = " << product << endl;
    }
    return 0;
}
