#include<iostream>
#include <stack>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    if (decimal == 0)
        return "0";

    stack<int> binaryDigits;
    while (decimal > 0) {
        binaryDigits.push(decimal % 2);
        decimal /= 2;
    }

    string binary;
    while (!binaryDigits.empty()) {
        binary += to_string(binaryDigits.top());
        binaryDigits.pop();
    }

    return binary;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    string binaryNumber = decimalToBinary(decimalNumber);
    cout << "Binary representation: " << binaryNumber << endl;

    return 0;
}