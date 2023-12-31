#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	long long int n;
	unsigned long long int a=0;
	unsigned long long int sum=0;

	for (int i=0;i<t;i++) {
		cin >> n;
		sum=0;
		for (int j=0;j<n;j++) {
			cin >> a;
			sum+=a;
		}
		a=sqrt(sum);
		if (a*a==sum or (a+1)*(a+1)==sum) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}

	}
	return 0;
}