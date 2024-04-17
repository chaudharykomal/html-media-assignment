#include <iostream>
using namespace std;

int reverseNumber(int num, bool started = false) {
    // Base case: if the number becomes 0, return 0
    if (num == 0) {
        return 0;
    }

    // Extract the last digit
    int digit = num % 10;
    
    // If the last digit is 0 and the reversed number has not started yet, skip it
    if (digit == 0 && !started) {
        return reverseNumber(num / 10, false);
    }

    // Otherwise, print the digit and continue reversing the remaining number
    cout << digit;
    return reverseNumber(num / 10, true);
}

int main() {
    int num = 1020304;
    cout << "Reversed number: ";
    reverseNumber(num);
    cout << endl;
    return 0;
}