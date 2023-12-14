#include <iostream>
using namespace std;

int binary_search(int array[],int n1,int n2,int key) {
    int pivot=array[(n1+n2)/2];
    if (n1==n2) {
        if (array[n1]==key) {
            return n1;
        } else {return -1;}
    }
    if (key>pivot) {
        return binary_search(array,((n1+n2)/2)+1,n2,key);

    } else { if (pivot==key) {
        return (n1+n2)/2;

    } else { 
        return binary_search(array,n1,((n1+n2)/2),key);
    }
    }
}

//write test cases for above function 

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    cout << binary_search(array1, 0, 4, 3) << endl; // Output: 2

    int array2[] = {2, 4, 6, 8, 10};
    cout << binary_search(array2, 0, 4, 5) << endl; // Output: -1

    int array3[] = {-10, -5, 0, 5, 10};
    cout << binary_search(array3, 0, 4, -5) << endl; // Output: 1

    int array4[] = {100, 200, 300, 400, 500};
    cout << binary_search(array4, 0, 4, 500) << endl; // Output: 4
}