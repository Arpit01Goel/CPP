#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int array1[n];
    int array2[n];
    for (int i=0;i<n;i++) {
        cin>>array1[i];
        array2[i]=0;
    }
    for (int i=0;i<n;i++) {
        array2[array1[i]]++;
    }
    for (int i=0;i<n;i++) {
        if (array2[array1[i]]>1) {
            cout<<i;
            break;
        }
    }
    return 0;
}