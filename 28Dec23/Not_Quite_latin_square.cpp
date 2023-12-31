#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	char matrix[3][3];
	string input;
	int arr[3];
	for (int i=0;i<t;i++) {
		for (int j=0;j<3;j++) {
			cin >> input;
			for (int k=0;k<3;k++) {
				matrix[j][k] = input[k];
			}
		}
		for (int j=0;j<3;j++) {
			for (int k=0;k<3;k++) {
				if (matrix[j][k]=='?') {
					for (int q=0;q<3;q++) {
						arr[q]=0;
					}
					for (int l=0;l<3;l++) {
						if (l!=j) {
						int val=matrix[l][k];
						val-=65;
						arr[val]++;
					}}		
					for (int q=0;q<3;q++) {
						if (arr[q]==0) {
							char ch=q+65;
							cout << ch << endl;
						}
					}
					}
			}
		}

	}
	return 0;
}