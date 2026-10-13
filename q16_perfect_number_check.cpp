#include <iostream>
using namespace std;

int main() {
    int number, divisorSum = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (int divisor = 1; divisor <= number / 2; divisor++)
        if (number % divisor == 0)
            divisorSum += divisor;

    if (divisorSum == number && number > 0)
        cout << number << " is a perfect number." << endl;
    else
        cout << number << " is not a perfect number." << endl;
    return 0;
}
