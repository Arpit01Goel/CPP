#include <iostream>
using namespace std;

int binary_search(int array[],int n1,int n2,int key) {
    if (n1==n2) {
        return key>array[n1];
    }
    if (n2-n1==1) {
        if (key<array[n1]) {
            return n1;
        } else{ if (key>array[n2]) {
            return n2+1;
        } else{return n2;
        }
        }
    }
    int n=n1+(n2-n1)/2;
    int pivot=array[n];
    if (pivot>key) {
        return binary_search(array,n1,n,key);
    } else {if (pivot ==key) {
        return n+1;
    } else { if (key<array[n+1]) {
        return n+1;
    } else{
        return binary_search(array,n,n2,key);
    }
    }
    }
}