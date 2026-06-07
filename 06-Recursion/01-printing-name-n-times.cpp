#include<iostream>
using namespace std;
void print_name(int i, int n){
    if(i>n){
        return;
    }
    cout<<"sreehitha"<<endl;
    print_name(i+1, n);
}
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    print_name(i, n);
    return 0;
}
