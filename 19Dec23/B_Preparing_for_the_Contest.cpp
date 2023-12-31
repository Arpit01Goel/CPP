#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,k;
    for (int i=0;i<t;i++) {
        cin >>n;
        cin >> k;
        for (int j=n-k;j<=n;j++) {
            cout << j << " ";
        }
        for (int j=n-k-1;j>0;j--) {
            cout << j << " ";
        } 
        cout <<endl;
    }

    return 0;
}