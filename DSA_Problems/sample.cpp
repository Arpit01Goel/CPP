#include <iostream>
using namespace std;

// Function to test
int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1
    if(add(1, 2) == 3) {
        cout << "Test case 1 passed\n";
    } else {
        cout << "Test case 1 failed\n";
    }

    // Test case 2
    if(add(0, 0) == 0) {
        cout << "Test case 2 passed\n";
    } else {
        cout << "Test case 2 failed\n";
    }

    // Test case 3
    if(add(-1, 1) == 0) {
        cout << "Test case 3 passed\n";
    } else {
        cout << "Test case 3 failed\n";
    }

    return 0;
}