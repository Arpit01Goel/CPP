#include <iostream>
using namespace std;

int f(string s) {
    //s has two characters . first a letter and second a number
    //print all square the rook can move to 

    //first store the letter in a and number in b
    char a = s[0];

    int b= s[1] - '0';

    //now print all the squares
    for(int i=1; i<=8; i++) {
        if (i!=b) {cout<<a<<i<<endl; }
        
    }
    for (char i='a'; i<='h'; i++) {
        if (i!=a) {cout<<i<<b<<endl; }
    }
    return 0;
}



int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        f(s);
    }
    return 0;


}