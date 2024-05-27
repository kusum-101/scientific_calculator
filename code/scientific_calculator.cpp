#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Function declarations
void showMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double a);
double logarithm(double a);
double sine(double a);
double cosine(double a);
double tangent(double a);
double sineDegrees(double a);
double cosineDegrees(double a);
double tangentDegrees(double a);
double sinhFunc(double a);
double coshFunc(double a);
double tanhFunc(double a);
void clearInput();

int main() {
    int choice;
    double num1, num2, result;

    do {
        showMenu();
        cout << "Enter your choice: ";
        while (!(cin >> choice)) {
            clearInput();
            cout << "Invalid input! Please enter a number: ";
        }

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = divide(num1, num2);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = power(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                result = squareRoot(num1);
                cout << "Result: " << result << endl;
                break;
            case 7:
                cout << "Enter a number: ";
                cin >> num1;
                result = logarithm(num1);
                cout << "Result: " << result << endl;
                break;
            case 8:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                result = sine(num1);
                cout << "Result: " << result << endl;
                break;
            case 9:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                result = cosine(num1);
                cout << "Result: " << result << endl;
                break;
            case 10:
                cout << "Enter an angle in radians: ";
                cin >> num1;
                result = tangent(num1);
                cout << "Result: " << result << endl;
                break;
            case 11:
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                result = sineDegrees(num1);
                cout << "Result: " << result << endl;
                break;
            case 12:
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                result = cosineDegrees(num1);
                cout << "Result: " << result << endl;
                break;
            case 13:
                cout << "Enter an angle in degrees: ";
                cin >> num1;
                result = tangentDegrees(num1);
                cout << "Result: " << result << endl;
                break;
            case 14:
                cout << "Enter a number: ";
                cin >> num1;
                result = sinhFunc(num1);
                cout << "Result: " << result << endl;
                break;
            case 15:
                cout << "Enter a number: ";
                cin >> num1;
                result = coshFunc(num1);
                cout << "Result: " << result << endl;
                break;
            case 16:
                cout << "Enter a number: ";
                cin >> num1;
                result = tanhFunc(num1);
                cout << "Result: " << result << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

void showMenu() {
    cout << "=== Scientific Calculator ===" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Logarithm (base e)" << endl;
    cout << "8. Sine (radians)" << endl;
    cout << "9. Cosine (radians)" << endl;
    cout << "10. Tangent (radians)" << endl;
    cout << "11. Sine (degrees)" << endl;
    cout << "12. Cosine (degrees)" << endl;
    cout << "13. Tangent (degrees)" << endl;
    cout << "14. Hyperbolic Sine (sinh)" << endl;
    cout << "15. Hyperbolic Cosine (cosh)" << endl;
    cout << "16. Hyperbolic Tangent (tanh)" << endl;
    cout << "0. Exit" << endl;
    cout << "=============================" << endl;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double a) {
    return sqrt(a);
}

double logarithm(double a) {
    return log(a);
}

double sine(double a) {
    return sin(a);
}

double cosine(double a) {
    return cos(a);
}

double tangent(double a) {
    return tan(a);
}

double sineDegrees(double a) {
    return sin(a * M_PI / 180.0);
}

double cosineDegrees(double a) {
    return cos(a * M_PI / 180.0);
}

double tangentDegrees(double a) {
    return tan(a * M_PI / 180.0);
}

double sinhFunc(double a) {
    return sinh(a);
}

double coshFunc(double a) {
    return cosh(a);
}

double tanhFunc(double a) {
    return tanh(a);
}

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
