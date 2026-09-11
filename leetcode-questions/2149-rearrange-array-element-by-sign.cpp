class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int pos=0;
        int neg=1;
        for(int x: nums){
            if(x>0){
                result[pos]=x;
                pos+=2;
            }
            else{
                result[neg]=x;
                neg+=2;
            }
        }
        return result;
        
    }
};
