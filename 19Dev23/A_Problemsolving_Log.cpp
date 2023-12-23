#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    string s;
    int ans;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cin >> s;
        int array[26] = {0};
        for (int j=0;j<n;j++) {
            array[s[j]-'A']++;
            
        }
        ans = 0;
        for (int j=0;j<26;j++) {
            if (array[j] >= j+1) {
                ans++;
            
            }
        }
        cout<< ans<<endl;
    }
    return 0;
}