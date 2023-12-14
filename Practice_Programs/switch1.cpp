#include <iostream>
using namespace std;

int main() {
    int money;
    cin>>money;
    for (int i=1;i<=30;i++) {
        if (i%2==0) {
            continue;
        } else if (money==0){
            break;
        }
    cout<<"Today is "<<i<<" You can go out with "<<money<<endl;
    money=0.1*money;
    }
    return 0;
}