#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int q;
    cin >>n;
    int n1=n;
    while (n!=0) {
        q+=pow((n%10),3);
        n=n/10;
    }
    cout<<(q==n1)<<endl;
    return 0;
}