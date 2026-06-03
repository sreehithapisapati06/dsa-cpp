#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
    while(n!=0){
        int lastdigit=n%10;
        num=num*10+lastdigit;
        n=n/10;
    }
    cout<<num;
    return 0;
}
