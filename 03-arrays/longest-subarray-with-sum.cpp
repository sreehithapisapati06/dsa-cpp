int longestSubarray(vector<int>& nums, int k) {

    unordered_map<int, int> mp;

    int prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < nums.size(); i++) {

        prefixSum += nums[i];

        if (prefixSum == k) {
            maxLength = i + 1;
        }

        if (mp.find(prefixSum - k) != mp.end()) {
            int length = i - mp[prefixSum - k];
            maxLength = max(maxLength, length);
        }

        if (mp.find(prefixSum) == mp.end()) {
            mp[prefixSum] = i;
        }
    }

    return maxLength;
}
