#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;
    int matrix[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> matrix[i][j];
        }
    }
    int k;
    cin >>k;
    int r=0;
    int c=m-1;
    while (r!=n or c!=-1 or c!=m or r!=-1) {
        if (matrix[r][c]>k) {
            c--;
        }else{if (matrix[r][c]<k) {
            r++;
        } else {
            cout<<"Element found";
            return 0;
        }
        }
    }
    cout << "Element not found";
    return 0;

}