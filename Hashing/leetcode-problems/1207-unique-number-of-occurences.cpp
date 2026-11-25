class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> ans;
        for(int i=0; i<arr.size(); i++){
            freq[arr[i]]++;
        }
        for(auto it:freq){
            if(ans.count(it.second)){
                return false;
            }
            ans.insert(it.second);
        }
        return true;
    }
};
