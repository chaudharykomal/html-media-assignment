#include <iostream>
using namespace std;

int findSmallestMissingPositive(int arr[], int n) {
    int missing = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == missing) {
            missing++;
        }
    }
    return missing;
}

int main() {
    int arr[] = {1, 2, 3, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallestMissing = findSmallestMissingPositive(arr, n);
    cout << "The smallest missing positive element is: " << smallestMissing << endl;

    return 0;
}
