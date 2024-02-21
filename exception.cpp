#include <iostream>
#include <stdexcept>

using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
    while (true) {
        try {
            double num1, num2;
            char op;

            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter operator (+, -, *, /): ";
            cin >> op;

            cin >> num2;
            cout << "Enter second number: ";

            switch (op) {
                case '+':
                    cout << "Result: " << add(num1, num2) <<endl;
                    break;
                case '-':
                    cout << "Result: " << subtract(num1, num2) <<endl;
                    break;
                case '*':
                    cout << "Result: " << multiply(num1, num2) <<endl;
                    break;
                case '/':
                    cout << "Result: " << divide(num1, num2) <<endl;
                    break;
                default:
                    throw std::invalid_argument("Invalid operator. Please enter +, -, *, or /.");
            }
        } catch (invalid_argument& e) {
            cerr << "Error: " << e.what() <<endl;
        } catch (std::exception& e) {
            cerr << "An error occurred: " << e.what() <<endl;
        }

        string anotherCalculation;
        cout << "Do you want to perform another calculation? (yes/no): ";
        cin >> anotherCalculation;

        if (anotherCalculation != "yes") {
            break;
        }
    }

    return 0;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        throw std::invalid_argument("Error: Cannot divide by zero");
    }
    return x / y;
}
