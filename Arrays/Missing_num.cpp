#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);  

        for (int i = 0; i < n; i++) {
            hash[nums[i]] = 1;
        }

        for (int i = 0; i <= n; i++) {
            if (hash[i] == 0) {
                return i;
            }
        }

        return -1; 
    }
};

int main() {
    int n;
    cout << "Enter number of elements (should be n, missing one from 0 to n): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (from 0 to n, one missing): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int missing = sol.missingNumber(nums);

    cout << "The missing number is: " << missing << endl;

    return 0;
}
