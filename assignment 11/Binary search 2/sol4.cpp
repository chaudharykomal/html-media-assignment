#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return true;
        }

        // If the left part is sorted
        if (nums[left] < nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        // If the right part is sorted
        else if (nums[mid] < nums[right]) {
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        // Handle duplicates: if nums[left] == nums[mid] == nums[right]
        else {
            if (nums[left] == nums[mid]) {
                left++;
            }
            if (nums[right] == nums[mid]) {
                right--;
            }
        }
    }

    return false;
}