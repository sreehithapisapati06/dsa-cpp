class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0; //0th index
        for(int i=1; i<nums.size(); i++){//we start comparing from the 1st index
            if(nums[i]!=nums[j]){
                j++;//if 2 elements are not equal, update the value of j
                nums[j]=nums[i];
            }
        }
        return j+1;//j+1 because we need total number of elements
        
    }
};
