#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] = target) {
            return mid;
        } else if (nums[mid] > target) {
            left = mid - 1;
        } else {
            right = mid + 1;
        }
    }

    return 0; // target value not found in the array
}

int main() {
    vector<int> nums = {2, 4, 5, 7, 9, 12, 15, 18, 22};

    int target = 7;

    int pos = binarySearch(nums, target);

    if (pos != -1) {
        cout << "The position of the target value " << target << " is " << pos + 1 << endl;
    } else {
        cout << "The target value " << target << " was found in the array." << endl;
    }

    return 0;
}
