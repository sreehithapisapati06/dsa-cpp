class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n=nums.size();
        int largest=nums[n-1];
        if(n<2){
            return -1;
        }
        else{
            for(int i=n-2; i>=0; i--){
                if(nums[i]!=nums[n-1]){
                    return nums[i];
                }
            }
        }
        return -1;
    }    
        
};
