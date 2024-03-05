#include <iostream>
#include <vector>

using namespace std;

int findUniqueNumber(vector<int>& nums) {
    int unique = 0;
    for (int num : nums) {
        unique ^= num;
    }
    return unique;
}

int main() {
    vector<int> nums = {4, 2, 3, 2, 3, 4, 1};

    int unique = findUniqueNumber(nums);

    cout << "The unique number is: " << unique << endl;

    return 0;
}
