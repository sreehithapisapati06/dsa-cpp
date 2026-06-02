#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines: ";
    cin>>n;

for (int i = 0; i < n; i++) {
        char ch = 'A' + i; 

        for (int j = 0; j <= i; j++) {
            cout << ch - j;  
        }

        cout << endl;
    }
    

    return 0;
}
    

    return 0;
}
