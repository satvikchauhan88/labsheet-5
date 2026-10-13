#include <iostream>
using namespace std;

int main() {
    int limit;
    long long seriesSum = 0;

    cout << "Enter N: ";
    cin >> limit;

    for (int term = 1; term <= limit; term++)
        seriesSum += term;

    cout << "Sum of 1 + 2 + 3 + ... + " << limit << " = " << seriesSum << endl;
    return 0;
}
