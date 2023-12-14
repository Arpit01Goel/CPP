#include <iostream>
using namespace std;

int main() {
    int r;
    cin>>r;
    for (int i=1;i<=r*2;i++) {
        for (int j=1;j<=((i<=r)?i:2*r+1-i);j++) {
            cout<<"*";
        } 
        for (int j=1;j<=((i<=r)?(r-i):i-r-1);j++) {
            cout<<"  ";
        }
        for (int j=1;j<=((i<=r)?i:2*r+1-i);j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}