#include <iostream>
using namespace std;

int main () {
    double a, b, result;
    char operation, choice;
    
    while (true) {
        // Prompt for values and operation
        cout << "\nA Value: ";
        cin >> a;
        cout << "Choose (+ - / * %): ";
        cin >> operation;
        cout << "B Value: ";
        cin >> b;

        cout << "o================================o\n";
        
        // Perform the chosen operation
        if (operation == '+') {
            result = a + b;
        } else if (operation == '-') {
            result = a - b;
        } else if (operation == '/') {
            if (b != 0) {
                result = a / b;
            } else {
                cout << "Error: Division by zero is undefined.";
                continue; // Ask for new input if division by zero
            }
        } else if (operation == '*') {
            result = a * b;
        } else if (operation == '%') {
            if ((int)b != 0) { // Prevent modulus by zero
                result = (int)a % (int)b;
            } else {
                cout << "Error: Modulus by zero is undefined.";
                continue; // Ask for new input if modulus by zero
            }
        } else {
            cout << "The character you entered is incorrect.";
            continue; // Ask for new input if operation is invalid
        }

        // Display the result
        cout << "Result of A " << operation << " B is " << result;

        cout << "\no================================o\n";
        
        // Ask if user wants to continue or exit
        cout << "Continue (Y/N)? ";
        cin >> choice;
        
        // While loop to check the choice
        while (choice == 'Y' || choice == 'y') {
            // If 'Y' or 'y' is entered, break this loop and return to outer loop
            break;
        }

        while (choice == 'N' || choice == 'n') {
            // If 'N' or 'n' is entered, break the outer loop and exit the program
            cout << "okay (T-T)";
            return 0; // Exit the program completely
        }
    }

    return 0;
}
