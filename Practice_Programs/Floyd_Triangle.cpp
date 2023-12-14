#include <iostream>
using namespace std;

int main() {
    int i=1;
    int r;
    cin>>r;
    for (int j=1;j<=r;j++) {
        for (int k=1;k<=j;k++) {
            cout<<i<<' ';i++;
        }
        cout<<endl;
    }
    return 0;
}