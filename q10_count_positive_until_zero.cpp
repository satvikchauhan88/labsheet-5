#include <iostream>
using namespace std;

int main() {
    int number, positiveCount = 0;

    cout << "Enter numbers (0 to stop):" << endl;
    while (true) {
        cin >> number;
        if (number == 0)
            break;
        if (number > 0)
            positiveCount++;
    }

    cout << "Positive numbers entered = " << positiveCount << endl;
    return 0;
}
