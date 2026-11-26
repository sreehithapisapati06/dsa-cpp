class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        unordered_map<int, int> mp;
        int k=0;
        int count=0;
        int sum=0;
        mp[0]=1;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            count+=mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};
