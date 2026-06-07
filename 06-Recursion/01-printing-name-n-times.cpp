#include <iostream>
using namespace std;
void printName(string name, int n) {
    if (n == 0) {
        return;
    }
    cout << name << endl;
    printName(name, n - 1); 
}
int main() {
    string name;
    int n;
    cin >> name;
    cin >> n;
    printName(name, n);
    return 0;
}
