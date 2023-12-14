#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int max;
    for (int j=0;j<t;j++) {
        max=2;
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int current_diff,pre_diff=arr[1]-arr[0];
        int curr=2;
        for (int i=1;i<n-1;i++) {
            current_diff=arr[i+1]-arr[i];
            
            if (current_diff==pre_diff) {
                curr+=1;
                if (curr>max) {
                max=curr;
            }}
            else {
                curr=2;
            }
            
            pre_diff=current_diff;
            
        }
        if (max>n) {
            cout<<n<<endl;}
        else{
        cout<< max<<endl;
        }
    }
    return 0;
}