class Solution {
public:
    static bool compare(pair<char, int>a, pair<char, int>b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
        }
        vector<pair<char, int>>v;
        for(auto it:freq){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), compare);
        string ans="";
        for(auto it:v){
            ans.append(it.second, it.first);
        }
        return ans;

    }
};
