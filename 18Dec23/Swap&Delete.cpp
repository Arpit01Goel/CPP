#include <iostream>
#include <string>
#include <algorithm> // Add missing include directive for the <algorithm> library
using namespace std;

int main() {
    int t;
    cin >>t;
    string s;
    int a,b,a1,a2;
    int x;
    int y;
    for (int i=0;i<t;i++) {
        cin>> s;
        int n=s.length();
        a=0;
        b=0;
        a1=0;
        a2=0;
        if (n==1) {
            cout<<1<<endl;
            continue;
        }

        for (int j=0;j<n;j++) {
            
            if (s[j]=='0') {
                a++;
            } else {
                b++;
            }

        }
        
        if (a==b) {
            cout<<0<<endl;
        }
        else {
            if (a<b) {
                for (int j=0;j<b;j++) {
                    if (s[j]=='0') {
                        a1++;
                    } 
                }

            cout << b+a1-2*min(b-a1,a1)<<endl;
            } else {
                for (int j=0;j<a;j++) {
                    if (s[j]=='1') {
                        a2++;
                    } 
                
                }

            cout << b+a2-2*min(a-a2,a2)<<endl;
            }
        }

    }

    return 0;
}
