#include <iostream>
#include <climits>

using namespace std;

void findLargestThree(int arr[], int size) {
    if (size < 3) {
        cout << "Array does not have at least three elements." << endl;
        return;
    }

    int firstMax = INT_MIN, secondMax = INT_MIN, thirdMax = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > firstMax) {
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            thirdMax = secondMax;
            secondMax = arr[i];
        } else if (arr[i] > thirdMax && arr[i] != firstMax && arr[i] != secondMax) {
            thirdMax = arr[i];
        }
    }

    cout << "The largest three elements in the array are: " << firstMax << ", " << secondMax << ", " << thirdMax << endl;
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90, 1, 98, 75};
    int size = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, size);

    return 0;
}
