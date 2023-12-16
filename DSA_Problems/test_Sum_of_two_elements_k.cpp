// Test case 1: Positive case with two elements summing up to k
int arr1[] = {2, 4, 6, 8, 10};
int n1 = sizeof(arr1) / sizeof(arr1[0]);
int k1 = 12;
bool result1 = f(n1, arr1, k1);
cout << "Result 1: " << result1 << endl; // Expected output: true

// Test case 2: Positive case with multiple elements summing up to k
int arr2[] = {1, 3, 5, 7, 9};
int n2 = sizeof(arr2) / sizeof(arr2[0]);
int k2 = 10;
bool result2 = f(n2, arr2, k2);
cout << "Result 2: " << result2 << endl; // Expected output: true

// Test case 3: Negative case with no elements summing up to k
int arr3[] = {2, 4, 6, 8, 10};
int n3 = sizeof(arr3) / sizeof(arr3[0]);
int k3 = 15;
bool result3 = f(n3, arr3, k3);
cout << "Result 3: " << result3 << endl; // Expected output: false