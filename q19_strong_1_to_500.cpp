#include <iostream>
using namespace std;

int main() {
    cout << "Strong numbers between 1 and 500: ";
    for (int number = 1; number <= 500; number++) {
        int factorialSum = 0;
        for (int temp = number; temp > 0; temp /= 10) {
            int digit = temp % 10;
            int digitFactorial = 1;
            for (int count = 2; count <= digit; count++)
                digitFactorial *= count;
            factorialSum += digitFactorial;
        }
        if (factorialSum == number)
            cout << number << " ";
    }
    cout << endl;
    return 0;
}
