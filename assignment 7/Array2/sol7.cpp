#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1};

    bool palindrome = isPalindrome(arr);

    if (palindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
