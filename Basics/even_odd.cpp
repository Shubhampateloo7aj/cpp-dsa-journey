#include <iostream>
using namespace std;

// Problem: Check if a number is Even or Odd
// Approach: Use modulo operator (%)
// Time Complexity: O(1)

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }

    return 0;
}
