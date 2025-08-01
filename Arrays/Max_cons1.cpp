
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the binary array elements (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findMaxConsecutiveOnes(nums);
    cout << "Maximum number of consecutive 1s: " << result << endl;

    return 0;
}
