class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        int reverse=0;
        while(temp!=0){
            int digit=temp%10;
            reverse=reverse*10+digit;
            temp/=10;
        }
        int reverse2=0;
        while(reverse!=0){
            int digit2=reverse%10;
            reverse2=reverse2*10+digit2;
            reverse/=10;
        }
        return reverse2==num;

    }
};
