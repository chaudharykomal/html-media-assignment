#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generatePowerSet(const vector<int>& nums, vector<int>& subset, int index, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(subset);

    // Iterate through the remaining elements of nums
    for (int i = index; i < nums.size(); i++) {
        // Skip duplicates
        if (i > index && nums[i] == nums[i - 1]) {
            continue;
        }

        // Add nums[i] to the current subset
        subset.push_back(nums[i]);

        // Recursively generate subsets starting from the next index
        generatePowerSet(nums, subset, i + 1, result);

        // Backtrack: remove nums[i] from the current subset
        subset.pop_back();
    }
}

vector<vector<int>> powerSet(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    // Sort the input array to handle duplicates
    vector<int> sortedNums = nums;
    sort(sortedNums.begin(), sortedNums.end());
    generatePowerSet(sortedNums, subset, 0, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = powerSet(nums);

    cout << "Power Set:" << endl;
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }

    return 0;
}