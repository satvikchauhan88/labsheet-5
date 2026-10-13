#include <iostream>
using namespace std;

int main() {
    int limit;

    cout << "Enter N: ";
    cin >> limit;

    cout << "Prime numbers between 1 and " << limit << ": ";
    for (int number = 2; number <= limit; number++) {
        bool isPrime = true;
        for (int divisor = 2; divisor * divisor <= number; divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << number << " ";
    }
    cout << endl;
    return 0;
}
