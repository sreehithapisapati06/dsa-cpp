class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        int numDigit=0;
        int temp=n;
        while(temp!=0){
            int digit=temp%10;
            sum+=digit*(numDigit%2==0?1:-1);
            temp/=10;
            numDigit++;
        }
        return (numDigit%2==0?sum*-1:sum);
       
        
    }
};
