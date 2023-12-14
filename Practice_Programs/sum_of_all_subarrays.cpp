#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int prefixSum[n];
    prefixSum[0] = array[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + array[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
            cout << sum << endl;
        }
    }

    return 0;
}