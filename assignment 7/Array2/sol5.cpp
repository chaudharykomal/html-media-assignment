#include <iostream>
#include <vector>

using namespace std;

void modifyArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) { // Even indexed element
            arr[i] += 10;
        } else { // Odd indexed element
            arr[i] *= 2;
        }
    }
}

int main() {
    // Example usage:
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    modifyArray(arr);

    // Print modified array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
