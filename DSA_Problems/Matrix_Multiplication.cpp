#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;
    int A[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            std::cin >> A[i][j];
            std::cout << A[i][j] << " " ;

        }
        std::cout << std::endl;
    }
    std::cin >> m;
    int o;
    std::cin >> o;
    int B[m][o];

    for (int i=0;i<m;i++) {
        for (int j=0;j<o;j++) {
            std::cin >> B[i][j];
            std::cout << B[i][j] << " " ;

        }
        std::cout << std::endl;
    }

    int X[n][o];
    for (int i=0;i<n;i++) {
        for (int j=0;j<o;j++) {
            int a;
            a=0;
            for (int k=0;k<m;k++) {
                a+=A[i][k]*B[k][j];
            }
            
            X[i][j]=a;
            cout << X[i][j] << " ";

        }
        cout << endl;
    }
    return 0;

}