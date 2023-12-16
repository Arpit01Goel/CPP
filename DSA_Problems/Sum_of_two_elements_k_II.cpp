#include <iostream>
using namespace std;




int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i=0;i<n;i++) {
        cin >> array[i];
    }
    int i=0;
    int j=n-1;
    int k;
    cin >> k;
    int sum;
    while (i<j) {
        sum = array[i]+array[j];
        if (sum>k) {
            j--;
        } else {if (sum<k) {
            i++;
        } else {cout<<array[i] <<" " << array[j];break;}}
    }return 0;
}