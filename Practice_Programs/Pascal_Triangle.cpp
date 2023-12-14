#include <iostream>
using namespace std;

int fact(int n) {
    int ans=1;
    for (int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int main() {
    int r;
    cin >>r;

    for (int i=0;i<r;i++) {
        for (int j=0;j<=i;j++) {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        } cout<<endl;
    }
}