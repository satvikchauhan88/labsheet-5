#include <iostream>
using namespace std;

int main() {
    int totalTerms;
    long long previousTerm = 0, currentTerm = 1;

    cout << "Enter number of terms: ";
    cin >> totalTerms;

    int termCount = 1;
    while (termCount <= totalTerms) {
        cout << previousTerm << " ";
        long long nextTerm = previousTerm + currentTerm;
        previousTerm = currentTerm;
        currentTerm = nextTerm;
        termCount++;
    }
    cout << endl;
    return 0;
}
