class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int other_num=target-nums[i];
            if(mp.find(other_num)!=mp.end()){
                return{mp[other_num], i};
            }
            mp[nums[i]]=i;
        }
        return{};
        
    }
};
