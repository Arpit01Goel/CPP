#include <iostream>
#include <stack>
using namespace std;

int min_length_after_deletions() {
    string s;
    cin>>s;
    int n;
    cin>>n;

    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() != c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.size();
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        
        cout<<min_length_after_deletions()<<endl;

    }
}