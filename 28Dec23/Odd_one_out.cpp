#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a,b,c;
	for (int i=0;i<t;i++) {
		cin >> a>>b>>c;
		if (a==b) {
			cout << c << endl;
		} else {
			if (b==c) {
				cout << a << endl;
			} else {
				cout << b << endl;
			}
		}

	}
	return 0;
}