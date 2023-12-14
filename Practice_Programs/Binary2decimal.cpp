#include <iostream>
#include <cmath>
using namespace std;

int binary2decimal(long long int n) {
    int d=0;
    int b=1;
    while (n!=0){
        d+=b*(n%10);
        n=n/10;
        b <<=1;
    }
    return d;
}

int decimal2binary(long long int n) {
    int d=1;
    long long ans=0;
    while (n!=0) {
        ans+=d*(n%2);
        n=n/2;
        d*=10;
    }
    return ans;
}


int main() {
    long long int n;
    cin>>n;
    cout<<decimal2binary(n)<<endl;
    return 0;
}