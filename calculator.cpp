#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << " ~> Welcome to calculator" << endl;

    // Loop until the user chooses to exit
    while (true) {
        // Display available operations
        cout << "(+) Add" << endl;
        cout << "(-) Subtract" << endl;
        cout << "(*) Multiply" << endl;
        cout << "(/) Divide" << endl;
        cout << "(%) Modulus" << endl;
        cout << "(e) Exit" << endl;

        // Prompt the user to choose an operation
        cout << " ^ Enter your choice: ";
        cin >> operation;

        // Exit if the user chooses 'e'
        if (operation == 'e') {
            break;
        }

        // Get the two numbers to perform the operation on
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Perform the chosen operation and store the result
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                // Handle division by zero
                if (num2 == 0) {
                    cout << "Error: Division by zero." << endl;
                    continue;
                }
                result = num1 / num2;
                break;
            case '%':
                // Handle division by zero
                if (num2 == 0) {
                    cout << "Error: Division by zero." << endl;
                    continue;
                }
                result = (int)num1 % (int)num2;
                break;
            default:
                // Handle invalid input
                cout << "Invalid operator." << endl;
                continue;
        }

        // Display the result
        cout << "Result: " << result << endl;
    }

    return 0;
}
