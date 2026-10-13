#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Prime factors: ";
    for (int factor = 2; factor * factor <= number; factor++) {
        while (number % factor == 0) {
            cout << factor << " ";
            number /= factor;
        }
    }
    if (number > 1)
        cout << number;
    cout << endl;
    return 0;
}
