#include <iostream>

using namespace std;

int linear_search(int array[],int n,int key) {
    for (int i=0;i<n;i++) {
        if (array[i]==key) {
            return i;
        }
        
    }
    return -1;
}

