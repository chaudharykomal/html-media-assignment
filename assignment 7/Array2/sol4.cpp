#include <iostream>

int findDifference(int arr[], int n) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    return evenSum - oddSum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    int difference = findDifference(arr, n);
    std::cout << "Difference between sum of elements at even indices and sum of elements at odd indices: " << difference << std::endl;

    return 0;
}
