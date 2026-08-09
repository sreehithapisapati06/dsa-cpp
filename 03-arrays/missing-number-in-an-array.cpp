#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of the array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cout<<"enter element "<<i<<" of array: ";
        cin>>arr[i];
    }
    int total=((n+1)*(n+2))/2;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"missing number is: "<<total-sum;
    return 0;
}
