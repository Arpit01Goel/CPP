#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int n;
    std::cin >>n;
    int array[n];
    for (int i=0;i<n;i++) {
        std::cin >> array[i];
    }

    int max=array[0];
    for (int i=0;i<n;i++) {
        if (array[i]>max) {
            max=std::max(array[i],max);
        }
    }
    std::cout<<max<<std::endl;
    return 0;
}