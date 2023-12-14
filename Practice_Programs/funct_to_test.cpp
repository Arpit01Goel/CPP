#include <iostream>
using namespace std;

int insertion_search(int array[],int n1,int n2,int key) {
    //array is sorted . now we need to find the index at which the key element should be inserted to keep the array sorted
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
        return insertion_search(array,n1,n,key);
    } else {if (pivot ==key) {
        return n+1;
    } else { if (key<array[n+1]) {
        return n+1;
    } else{
        return insertion_search(array,n,n2,key);
    }
    }
    }
}

int main() {
    // Test case 1: Key is smaller than all elements in the array
    int array1[] = {5, 10, 15, 20};
    int key1 = 2;
    int result1 = insertion_search(array1, 0, 3, key1);
    cout << "Test case 1: " << result1 << endl; // Expected output: 0

    // Test case 2: Key is greater than all elements in the array
    int array2[] = {5, 10, 15, 20};
    int key2 = 25;
    int result2 = insertion_search(array2, 0, 3, key2);
    cout << "Test case 2: " << result2 << endl; // Expected output: 4

    // Test case 3: Key is already present in the array
    int array3[] = {5, 10, 15, 20};
    int key3 = 10;
    int result3 = insertion_search(array3, 0, 3, key3);
    cout << "Test case 3: " << result3 << endl; // Expected output: 2

    // Test case 4: Key should be inserted in the middle of the array
    int array4[] = {5, 10, 20, 30};
    int key4 = 15;
    int result4 = insertion_search(array4, 0, 3, key4);
    cout << "Test case 4: " << result4 << endl; // Expected output: 2

    // Test case 5: Key should be inserted at the end of the array
    int array5[] = {5, 10, 15, 20};
    int key5 = 25;
    int result5 = insertion_search(array5, 0, 3, key5);
    cout << "Test case 5: " << result5 << endl; // Expected output: 4


    return 0;
}
