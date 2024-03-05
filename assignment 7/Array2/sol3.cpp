#include <iostream>

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        std::cout << "The array is sorted." << std::endl;
    } else {
        std::cout << "The array is not sorted." << std::endl;
    }

    return 0;
}
