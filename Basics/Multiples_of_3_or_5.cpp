#include <iostream>
using namespace std;

int sumOfMultiples(int n) {
    if (n < 0) return 0;

    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Sum: " << sumOfMultiples(n) << endl;

    return 0;
}
