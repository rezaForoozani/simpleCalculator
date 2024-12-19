#include <iostream>

class Calculator {
public:
    // Method to add two numbers
    double add(double a, double b) {
        return a + b;
    }

    // Method to subtract two numbers
    double subtract(double a, double b) {
        return a - b;
    }

    // Method to multiply two numbers
    double multiply(double a, double b) {
        return a * b;
    }

    // Method to divide two numbers
    double divide(double a, double b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0; // Return 0 or handle error as needed
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    double num1, num2;

    // Input two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform operations
    std::cout << "Addition: " << calc.add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(num1, num2) << std::endl;
    std::cout << "Division: " << calc.divide(num1, num2) << std::endl;

    return 0;
}
