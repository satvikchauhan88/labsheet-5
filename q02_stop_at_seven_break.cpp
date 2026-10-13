#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 10; number++) {
        if (number == 7)
            break;
        cout << number << " ";
    }
    cout << endl;
    return 0;
}
