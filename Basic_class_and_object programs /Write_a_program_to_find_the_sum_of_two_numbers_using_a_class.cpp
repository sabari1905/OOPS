#include <iostream>
using namespace std;

class Calculator {
private:
    // Private data members
    int num1;
    int num2;

public:
    // Constructor to initialize numbers
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Method to calculate the sum
    int calculateSum() {
        return num1 + num2;
    }

    // Method to display the numbers and their sum
    void displaySum() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
        cout << "Sum: " << calculateSum() << endl;
    }
};

int main() {
    // Input numbers from the user
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Create an object of the Calculator class
    Calculator calc(a, b);

    // Display the numbers and their sum
    cout << "\nCalculating Sum:" << endl;
    calc.displaySum();

    return 0;
}
