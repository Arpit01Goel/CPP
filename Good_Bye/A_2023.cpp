#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n;
	int k;
	int a[6]={1,7,17,119,289,2023};
	short int c[6];
	for (int i=0;i<t;i++) {
		cin >> n >> k;
		int b[n];
		int c[6] = {0};
		for (int j = 0; j < n; j++) {
			cin >> b[j];
		}
		for (int j=0;j<n;j++) {
			if (2023%b[j]!=0) {
				cout << "NO" << endl;
				goto thisend;
			}
			else {
				for (int l=0;l<6;l++) {
					if (b[j]==a[l]) {
						c[l]++;
					}
				}
			}
		}
		cout << "YES" << endl;
		for (int j=0;j<6;j++) {
			if (c[j]!=1) {
				cout << a[j] << " ";
			}
		}
		cout << endl;
		thisend: ;

	}
	return 0;
}



