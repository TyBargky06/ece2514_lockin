#include <iostream>

int add(int a, int b) {
    // Fixed: add() was subtracting b from a instead of adding them.
    return a + b;
}

int subtract(int a, int b) {
    // Fixed: subtract() was adding a and b instead of subtracting them.
    return a - b;
}

int multiply(int a, int b) {
    // Fixed: the return statement was missing a semicolon.
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        std::cout << "Division by zero is not allowed!" << std::endl;
        return 0;
    }

    return a / b;
}

int main() {
    int x, y;

    // Fixed: cout/cin operators were reversed. cout uses << and cin uses >>.
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    int choice;

    std::cout << "Select an operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide): ";
    std::cin >> choice;

    int result;

    // Fixed: assignment (=) was used instead of comparison (==).
    if (choice == 1) {
        result = add(x, y);
    } else if (choice == 2) {
        result = subtract(x, y);
    } else if (choice == 3) {
        result = multiply(x, y);
    } else if (choice == 4) {
        result = divide(x, y);
    }

    // Fixed: cout used < instead of the output operator <<.
    std::cout << "The result is: " << result << std::endl;

    return 0;
}