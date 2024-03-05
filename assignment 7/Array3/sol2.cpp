#include <iostream>
#include <vector>

using namespace std;

void multiply(vector<int>& result, int num) {
    int carry = 0;
    for (int i = 0; i < result.size(); ++i) {
        int product = result[i] * num + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

vector<int> factorial(int n) {
    vector<int> result;
    result.push_back(1);
    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> fact = factorial(n);

    cout << "Factorial of " << n << " is: ";
    for (int i = fact.size() - 1; i >= 0; --i) {
        cout << fact[i];
    }
    cout << endl;

    return 0;
}
