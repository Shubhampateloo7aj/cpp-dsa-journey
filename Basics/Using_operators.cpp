#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (op == '+') {
        cout << "Result = " << a + b;
    }
    else if (op == '-') {
        cout << "Result = " << a - b;
    }
    else if (op == '*') {
        cout << "Result = " << a * b;
    }
    else if (op == '/') {
        if (b != 0)
            cout << "Result = " << a / b;
        else
            cout << "Division by zero is not allowed";
    }
    else {
        cout << "Invalid operator";
    }

    return 0;
}
