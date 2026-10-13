#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter numbers (-1 to stop):" << endl;
    while (true) {
        cin >> number;
        if (number == -1)
            break;
        if (number < 0)
            continue;
        sum += number;
    }

    cout << "Sum of non-negative numbers = " << sum << endl;
    return 0;
}
