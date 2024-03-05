#include <iostream>

int countElementsGreaterThanX(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {10, 30, 20, 50, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 25; // Example value of x

    int count = countElementsGreaterThanX(arr, n, x);
    std::cout << "Number of elements strictly greater than " << x << ": " << count << std::endl;

    return 0;
}
