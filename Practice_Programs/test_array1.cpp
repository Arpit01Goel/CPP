#include <iostream>

using namespace std;

int linear_search(int array[5], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Test case 1: Key is present at the beginning of the array
    int arr1[] = {5, 10, 15, 20, 25};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 5;
    int result1 = linear_search(arr1, n1, key1);
    cout << "Result 1: " << result1 << endl; // Expected output: 0

    // Test case 2: Key is present at the end of the array
    int arr2[] = {5, 10, 15, 20, 25};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 25;
    int result2 = linear_search(arr2, n2, key2);
    cout << "Result 2: " << result2 << endl; // Expected output: 4

    // Test case 3: Key is not present in the array
    int arr3[] = {5, 10, 15, 20, 25};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int key3 = 12;
    int result3 = linear_search(arr3, n3, key3);
    cout << "Result 3: " << result3 << endl; // Expected output: -1

    return 0;
}