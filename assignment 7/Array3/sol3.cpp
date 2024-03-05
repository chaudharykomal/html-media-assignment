#include <iostream>
#include <vector>

using namespace std;

int firstNonRepeatingElement(vector<int>& arr) {
    vector<int> count(100001, 0); // Assuming the maximum element in the array is 100000
    for (int num : arr) {
        count[num]++;
    }
    for (int num : arr) {
        if (count[num] == 1) {
            return num;
        }
    }
    return -1; // No non-repeating element found
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 4, 5, 4, 6};

    int firstNonRepeating = firstNonRepeatingElement(arr);

    if (firstNonRepeating != -1) {
        cout << "The first non-repeating element is: " << firstNonRepeating << endl;
    } else {
        cout << "There is no non-repeating element in the array." << endl;
    }

    return 0;
}
