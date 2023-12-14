#include <iostream>
using namespace std;

int main() {
    char button;
    cin>>button;

    switch (button){
        case 'a':
        cout<<"button a is chosen";
        break;
        case 'b':
        cout<<"button b is choosen";
        break;
        case 'c':
        cout<<"button c ";
        break;
        default:
        cout<<"I am still learning more";
        break;
    }
    return 0;
}