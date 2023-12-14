#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int q;
    while (n!=0) {
        q=q*10 + n%10;
        n=(n-n%10)/10;
    }
    cout<<q<<endl;
    return 0;
}