// Test case 1: Array with positive numbers
int arr1[] = {1, 2, 3, 4, 5};
int n1 = sizeof(arr1) / sizeof(arr1[0]);
f(n1, arr1);
// Expected output: 15

// Test case 2: Array with negative numbers
int arr2[] = {-1, -2, -3, -4, -5};
int n2 = sizeof(arr2) / sizeof(arr2[0]);
f(n2, arr2);
// Expected output: -1

// Test case 3: Array with both positive and negative numbers
int arr3[] = {1, -2, 3, -4, 5};
int n3 = sizeof(arr3) / sizeof(arr3[0]);
f(n3, arr3);
// Expected output: 7

// Test case 4: Array with all zeros
int arr4[] = {0, 0, 0, 0, 0};
int n4 = sizeof(arr4) / sizeof(arr4[0]);
f(n4, arr4);
// Expected output: 0

// Test case 5: Array with a single element
int arr5[] = {10};
int n5 = sizeof(arr5) / sizeof(arr5[0]);
f(n5, arr5);
// Expected output: 10#include <iostream>

int f(int n, int array[]) {
    int max_sum = array[0];
    int curr_sum = 0;
    int init_index = 0;
    int end_index = n;
    for (int i = 0; i < n + end_index; i++) {
        curr_sum += array[i % n];
        if (curr_sum > max_sum) {
            max_sum = curr_sum;
        } else {
            if (curr_sum < 0) {
                end_index = init_index;
                init_index = i + 1;
            }
        }
    }
    std::cout << max_sum << std::endl;
    return 0;
}

int main() {
    // Test case 1: Array with positive numbers
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    f(n1, arr1);
    // Expected output: 15

    // Test case 2: Array with negative numbers
    int arr2[] = {-1, -2, -3, -4, -5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    f(n2, arr2);
    // Expected output: -1

    // Test case 3: Array with both positive and negative numbers
    int arr3[] = {1, -2, 3, -4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    f(n3, arr3);
    // Expected output: 7

    // Test case 4: Array with all zeros
    int arr4[] = {0, 0, 0, 0, 0};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    f(n4, arr4);
    // Expected output: 0

    // Test case 5: Array with a single element
    int arr5[] = {10};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    f(n5, arr5);
    // Expected output: 10

    return 0;
}