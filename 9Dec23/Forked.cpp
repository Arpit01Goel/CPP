#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    for (int i=0;i<t;i++) {
        int a,b,xk,xq,yk,yq;
        cin >> a >>b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        int x = abs(xk-xq);
        int y = abs(yk-yq);
        int ans=0;


        if (a!=b) {
            for (int m=-1;m<2;m+=2) {
            for (int n=-1;n<2;n+=2) {
                for (int o=-1;o<2;o+=2) {
                    for (int p=-1;p<2;p+=2) {
                        if (x==m*a+n*b && y==o*b+p*a) {
                            ans++;
                        }
                        if (x==m*b+n*b && y==o*a+p*a) {
                            ans++;
                        }
                        if (x==m*a+n*a && y==o*b+p*b) {
                            ans++;
                        }
                        if (x==m*b+n*a && y==o*a+p*b) {
                            ans++;
                        }
                        }
                    }
                }
            }
        
        } else {
            if (x==0 and y==2*a) {
                ans=ans+2;
            }
            if (x==2*a and y==0) {
                ans=ans+2;
            }
            if (x==2*a and y==2*a) {
                ans=ans+1;
            }
        }


    cout<<ans<<endl;}
    


    return 0;}

