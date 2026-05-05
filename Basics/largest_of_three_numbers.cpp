#include <iostream>
using namespace std;

// Problem: Find the largest of three numbers
// Approach: Compare using if-else conditions
// Time Complexity: O(1)

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest is: " << a;
    }
    else if (b >= a && b >= c) {
        cout << "Largest is: " << b;
    }
    else {
        cout << "Largest is: " << c;
    }

    return 0;
}
