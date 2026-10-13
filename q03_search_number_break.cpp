#include <iostream>
using namespace std;

int main() {
    int totalNumbers, targetNumber, currentNumber;
    bool isFound = false;

    cout << "Enter how many numbers will be entered: ";
    cin >> totalNumbers;
    cout << "Enter the number to search: ";
    cin >> targetNumber;

    for (int position = 1; position <= totalNumbers; position++) {
        cout << "Enter number " << position << ": ";
        cin >> currentNumber;
        if (currentNumber == targetNumber) {
            cout << "Number found at position " << position << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound)
        cout << "Number not found." << endl;
    return 0;
}
