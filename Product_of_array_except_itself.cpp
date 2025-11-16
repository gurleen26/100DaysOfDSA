#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf ::vector<int>& nums) {
        int suffix = 1;
        int n = nums.size();
        ::vector<int> res(n, 1);

        // prefix
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }

        // suffix
        for (int i = n - 2; i >= 0; i--) {
            suffix = suffix * nums[i + 1];
            res[i] *= suffix;
        }
        return res;
    }
};

int main() {

    vector<int> nums1 = {1, 2, 3, 4};
    Solution sol1;
    vector<int> result1 = sol1.productExceptSelf(nums1);

    cout << "Input: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << "\nOutput: ";
    for (int val : result1) {
        cout << val << " ";
    }

    return 0;
}