#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> array[i][j];
            cout << array [i][j] << " " ;
        }
        cout << endl;
    }

    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            int a=array[i][j];
            array[i][j]=array[j][i];
            array[j][i]=a;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}