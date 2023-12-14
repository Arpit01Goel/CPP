#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    for (int i=0;i<t;i++) {
       int n;
       cin>>n;
       int array[n];
       for (int j=0;j<n;j++) {
        cin>>array[j];
       }
       int max=array[0];
       int ans=0;
       for (int j=1;j<n-1;j++) {
            int t=array[j];
            if (t>max) {
                max=t;
                if (t>array[j+1]) {
                    ans++;
                }

            }
       }
       if (array[0]>array[1] or array[n-1]>max){ans++;}
       cout<<ans;
    }



return 0;
}