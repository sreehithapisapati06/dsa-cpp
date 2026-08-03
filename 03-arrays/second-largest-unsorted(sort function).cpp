class Solution {
public:
    int secondLargest(vector<int>& nums) {
        int n = nums.size();

        if (n < 2) return -1;

        sort(nums.begin(), nums.end());

        int largest = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != largest) {
                return nums[i];
            }
        }

        return -1; // All elements are the same
    }
};
