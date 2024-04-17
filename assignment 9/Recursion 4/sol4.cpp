#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive call to calculate factorial
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is negative
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate and print the factorial
        int result = factorial(n);
        cout << "Factorial of " << n << " is: " << result << endl;
    }

    return 0;
}
