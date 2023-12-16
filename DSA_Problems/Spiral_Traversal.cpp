#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n;
    cin >> m;

    int arr[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> arr[i][j] ;
            cout << arr[i][j] << " ";
        }
        cout<< endl;
    }
    int start_row=0;
    int end_row=n-1;
    int start_col=0;
    int end_col=m-1;

    int no_of_items=0;
    while (true) {
        for (int q=start_col;q<=end_col;q++) {
            cout << arr[start_row][q]  << " ";
            no_of_items++;
            if (no_of_items==m*n) {
                goto end;
            }
        }
        for (int q=start_row+1;q<=end_row;q++) {
            cout << arr[q][end_col] << " ";
            no_of_items++;
            if (no_of_items==m*n) {
                goto end;
            }
        }
        for (int q=end_col-1;q>=start_col;q--) {
            cout << arr[end_row][q] << " ";
            no_of_items++;
            if (no_of_items==m*n) {
                goto end;
            }
        }
        for (int q=end_row-1;q>start_row;q--) {
            cout << arr[q][start_col] << " ";
            no_of_items++;
            if (no_of_items==m*n) {
                goto end;
            }
        }
        start_row++;end_row--;start_col++;end_col--;
    }
    end :
    ;
    return 0;
}