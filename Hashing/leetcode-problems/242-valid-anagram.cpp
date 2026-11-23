class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        unordered_map<char, int> freq1;
        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            freq1[t[i]]++;
        }
        if(freq==freq1){
            return true;
        }
        return false;
    }
};
