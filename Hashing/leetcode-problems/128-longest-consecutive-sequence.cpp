class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest=0;
        for(auto num: st){
            if(st.count(num-1)==0){
                int count = 1;
                int x=num;
                while(st.count(x+1)){
                    x++;
                    count++;
                }
            longest=max(longest, count);
            }
        }
        return longest;
    }
};
