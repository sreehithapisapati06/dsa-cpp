#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> num1(n);
    vector<int> num2(n);
    vector<int> ans;
    int i=0;
    int j=0;
    for(int i=0; i<n; i++){
        cout<<"enter element "<<i<<" of array 1: ";
        cin>>num1[i];
    }
    for(int j=0; j<n; j++){
        cout<<"enter element "<<j<<" of array 2: ";
        cin>>num2[j];
    }
    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());

    while(i<num1.size()&&j<num2.size()){
        if(num1[i]<num2[j]){
            if(ans.empty() || ans.back()!=num1[i]){
                ans.push_back(num1[i]);
            }
            i++;
        }
        else if(num2[j]<num1[i]){
            if(ans.empty()||ans.back()!=num2[j]){
                ans.push_back(num2[j]);
            }
            j++;
            
        }
            else {
                if (ans.empty() || ans.back() != num1[i]){
                    ans.push_back(num1[i]);

                }
                i++;
                j++;
            }
            
            
    }
    while(i<num1.size()){
        if(ans.empty()||ans.back()!=num1[i]){
            ans.push_back(num1[i]);
        }
        i++;
        
    }
    while(j<num2.size()){
        if(ans.empty()||ans.back()!=num2[j]){
            ans.push_back(num2[j]);
        }
        j++;
        
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}
