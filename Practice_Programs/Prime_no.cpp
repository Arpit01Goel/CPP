#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(long long int n) {
    if (n==2 or n==3){
        return true;
    }
    if (n<=1) {
        return false;
    }
    if (!(n%2 and n%3)) {
        return false;
    } 
    if ((n+1)%6==0 or (n-1)%6==0) {
    
        for (int i=1;6*i-1<=sqrt(n);i++) {
            if (!(n%(6*i-1) and n%(6*i+1))) {
                return false;
            }
        }
        return true;}
    else {
        return false;
    }

}

int main() {

    while (true) {
        long long int n;
        cin>>n;
        cout<<boolalpha<<check_prime(n)<<endl;
    }

    return 0;
}