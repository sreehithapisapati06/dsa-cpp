#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;
    int num=0;
    while(n!=0){
        int last_digit=n%10;
        num=num*10+last_digit;
        n=n/10;
    }
    if(original==num){
        cout<<"palindrome number";
    }
    else{
        cout<<"not a palindrome number";
    }
    return 0;
}
