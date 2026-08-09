class Solution {
public:
    vector<int> replaceElements(vector<int>& arr){
        int max=-1;
        int n=arr.size();
        for(int i=n-1; i>=0; i--){
            int currEle=arr[i];
            arr[i]=max;
            if(max<currEle){
                max=currEle;
            }
        }
        return arr;
    }
};
