//given a array and an int k . find if two elements of array adds upto k ( and return thieir indexes)
// brute force is n^2 but we will do it in n time complexity

#include <iostream>
#include <map>
using namespace std;

bool f(int n,int array[],int k) {
    map <int,int> ma;
    for (int i=0;i<n;i++) {
        ma[array[i]]=-1;
        ma[k-array[i]]=-1;
    }
    for (int i=0;i<n;i++) {
        if (ma[k-array[i]]!=-1) {
            cout << ma[k-array[i]] << " " << i << endl;
            return true;
        }
        else {
            ma[array[i]]=i;
        }
    }
    return false;

}

int main() {

int n=4;
int array[n];
for (int i=0;i<n;i++) {
    cin>>array[i];
}
int k;
cin >>k;
f(n,)


//     // Test case 1: Positive case with two elements summing up to k
// int arr1[] = {2, 4, 6, 8, 10};
// int n1 = sizeof(arr1) / sizeof(arr1[0]);
// int k1 = 12;
// bool result1 = f(n1, arr1, k1);
// cout << "Result 1: " << result1 << endl; // Expected output: true

// // Test case 2: Positive case with multiple elements summing up to k
// int arr2[] = {1, 3, 5, 7, 9};
// int n2 = sizeof(arr2) / sizeof(arr2[0]);
// int k2 = 10;
// bool result2 = f(n2, arr2, k2);
// cout << "Result 2: " << result2 << endl; // Expected output: true

// // Test case 3: Negative case with no elements summing up to k
// int arr3[] = {2, 4, 6, 8, 10};
// int n3 = sizeof(arr3) / sizeof(arr3[0]);
// int k3 = 15;
// bool result3 = f(n3, arr3, k3);
// cout << "Result 3: " << result3 << endl; // Expected output: false

// // Test case 4: Negative case with empty array
// int arr4[] = {};
// int n4 = sizeof(arr4) / sizeof(arr4[0]);
// int k4 = 5;
// bool result4 = f(n4, arr4, k4);
// cout << "Result 4: " << result4 << endl; // Expected output: false

// // Test case 5: Positive case with single element summing up to k
// int arr5[] = {5};
// int n5 = sizeof(arr5) / sizeof(arr5[0]);
// int k5 = 5;
// bool result5 = f(n5, arr5, k5);
// cout << "Result 5: " << result5 << endl; // Expected output: false
return 0;
}