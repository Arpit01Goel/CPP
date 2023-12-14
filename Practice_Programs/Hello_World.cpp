#include <iostream>
using namespace std;

int main() {

    string s="";
    string h;
    getline(cin,h);

    for (int i=0;i<h.length();i++) {
        for (char j='a';j<='z';j++) {
            if (j==h[i]) {
                s= s + j;
                break;
            } else {
                cout<<s<<endl;
            }
            }
        for (char j='A';j<='Z';j++) {
            if (j==h[i]) {
                s= s + j;
                break;
            } else {
                cout<<s<<endl;
            }
            }
        }
        cout<<s<<endl;
    return 0;
}
