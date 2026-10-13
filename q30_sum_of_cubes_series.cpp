#include <iostream>
using namespace std;

int main() {
    int limit;
    long long seriesSum = 0;

    cout << "Enter N: ";
    cin >> limit;

    for (int term = 1; term <= limit; term++)
        seriesSum += (long long)term * term * term;

    cout << "Sum of cubes up to " << limit << " = " << seriesSum << endl;
    return 0;
}
