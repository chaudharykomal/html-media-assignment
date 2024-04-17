#include <iostream>
#include <vector>
using namespace std;

void printSumTriangle(vector<int> arr) {
    // Base case: if the array is empty, return
    if (arr.empty()) {
        return;
    }

    // Print the current level
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Create a new array for the next level
    vector<int> nextLevel;

    // Calculate the sums for the next level
    for (int i = 0; i < arr.size() - 1; i++) {
        nextLevel.push_back(arr[i] + arr[i + 1]);
    }

    // Recursively call the function for the next level
    printSumTriangle(nextLevel);
}

int main() {
    vector<int> input = {5, 4, 3, 2, 1};
    printSumTriangle(input);
    return 0;
}