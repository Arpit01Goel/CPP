#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int array[n];
    for (int i=0;i<n;i++) {
        cin>>array[i];
    }
    int rounds=0;
    int swaps=0;
    do {
        swaps=0;
        for (int i=0;i<n-rounds-1;i++) {
            if (array[i]>array[i+1]) {
                swap(array[i],array[i+1]);
                swaps++;
            }
        }
        rounds++;
        // if (rounds==n) {
        //     break;
        // }
    } while (swaps !=0);
     
    

    for (int i=0;i<n;i++) {
        cout << array[i]<<" ";
    }
    return 0;
}