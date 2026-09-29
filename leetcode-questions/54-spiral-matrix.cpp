class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) {
            return {};
        }
        vector<int> ans;
        int top=0;
        int bottom=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        while(top<=bottom && left<=right){
            //top
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            
            }
            top++;
            //right most column
            for(int j=top; j<=bottom; j++){
                ans.push_back(matrix[j][right]);
            
            }
            right--;
            //bottom
            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                
                }
                bottom--;
            }
            //left
            if(left<=right){
                for(int j=bottom; j>=top; j--){
                    ans.push_back(matrix[j][left]);
                
                }
                left++;
            }
        }
        return ans;
    }
};
