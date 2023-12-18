#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n,m;
    for (int i=0;i<t;i++) {
        cin >>n;
        cin >>m;
        if (n>m) {
            int a=m;
            m=n;
            n=a;

        }

        if (n==1) {
            cout << 1 <<endl;
        } else {
            cout << m<<endl;
            }
        }

    return 0;
}