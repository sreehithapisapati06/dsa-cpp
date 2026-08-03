class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x;
        if(1<=num && t<=50){
            x=num+(2*t);
        }
        return x;
        
        
    }
};
