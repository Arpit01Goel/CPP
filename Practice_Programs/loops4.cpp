#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    do {
        cout<<n<<endl;
        n=n/2;
    } while(n!=0);
    return 0;
}