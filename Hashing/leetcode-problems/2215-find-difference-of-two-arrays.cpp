
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        for(int i = 0; i < nums1.size(); i++) {
            st1.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            st2.insert(nums2[i]);
        }
        vector<int> ans1;
        vector<int> ans2;
        for(auto it : st1) {
            if(!st2.count(it)) {
                ans1.push_back(it);
            }
        }
        for(auto it : st2) {
            if(!st1.count(it)) {
                ans2.push_back(it);
            }
        }
        return {ans1, ans2};
    }
};
