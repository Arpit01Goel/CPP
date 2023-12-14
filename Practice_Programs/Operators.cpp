#include <iostream>
using namespace std;

int main() {
    int a,b;
    a=10;
    b=a++ + ++a;
    cout<<b;
    return 0; 
}