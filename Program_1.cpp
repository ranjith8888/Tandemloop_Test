#include <bits/stdc++.h>
using namespace std;

class Calculator {
private:
    double a, b;
    string op;

public:
    Calculator(double a, double b, string operation) {
        this->a = a;
        this->b = b;
        this->op = operation;
    }

    double calculate() {
        if (op == "add") {
            return a + b;
        } else if (op == "subtract") {
            return a - b;
        } else if (op == "multiply") {
            return a * b;
        } else if (op == "divide") {
            if (b == 0) {
                cout << "Error: Division by zero\n";
                return 0;
            }
            return a / b;
        } else {
            cout << "Invalid operation\n";
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter operation (add/subtract/multiply/divide): ";
    cin >> op;

    Calculator calc(a, b, op);
    cout << "Result: " << calc.calculate() << endl;

    return 0;
}
