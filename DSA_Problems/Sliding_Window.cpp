#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++) {
        cin >> array[i];
    }
    
    int array1[n];
    int max_sum=0;
    array1[0]=array[0];
    for (int i=1;i<n;i++) {
        array1[i]=array[i]+array1[i-1];
        if (array1[i]>max_sum) {
            max_sum=array1[i];
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<=i;j++) {
            
        if (array1[i]-array1[j] > max_sum ) {
            max_sum=array1[i]-array1[j];
        }
    }}
    cout << max_sum <<endl;
    return 0;
}