#include <iostream>
#include <vector>

using namespace std;

int countTripletsWithSum(vector<int>& arr, int x) {
    int count = 0;
    int n = arr.size();

    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == x) {
                count++;
                left++;
                right--;
            } else if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int x = 22;

    int tripletsCount = countTripletsWithSum(arr, x);

    cout << "Number of triplets with sum equal to " << x << " is: " << tripletsCount << endl;

    return 0;
}
