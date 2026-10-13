#include <iostream>
using namespace std;

int main() {
    cout << "Perfect numbers between 1 and 1000: ";
    for (int number = 1; number <= 1000; number++) {
        int divisorSum = 0;
        for (int divisor = 1; divisor <= number / 2; divisor++)
            if (number % divisor == 0)
                divisorSum += divisor;
        if (divisorSum == number)
            cout << number << " ";
    }
    cout << endl;
    return 0;
}
