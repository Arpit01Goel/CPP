#include <iostream>
#include <vector>
#include <string>
using namespace std;

string f(string s) {
    string ans="";
    vector<int> index_small;
    vector<int> index_large;

    for (int i=0;i<s.length();i++) {
        if (s[i]=='b') {
            if (index_small.size()!=0) {
                ans=ans.substr(0,index_small.back())+ans.substr(index_small.back()+1);
                index_small.pop_back();
                for (int j=index_large.size()-1;j>=0;j--) {
                    if (index_large[j]>index_small.back()) {
                        index_large[j]--;
                    } if (index_large[j]<=index_small.back()) {
                        break;
                    }
                }
            }
        }
        else {
            if (s[i]=='B') {
                if (index_large.size()!=0) {
                    ans=ans.substr(0,index_large.back())+ans.substr(index_large.back()+1);
                    index_large.pop_back();
                    for (int j=index_small.size()-1;j>=0;j--) {
                        if (index_small[j]>index_large.back()) {
                            index_small[j]--;
                        } if (index_small[j]<=index_large.back()) {
                            break;
                        }
                    }
                }
            }
            else { 
                ans+=s[i];
                if (s[i]>='a' && s[i]<='z') {
                    index_small.push_back(ans.size()-1);
                }
                else {
                    index_large.push_back(ans.size()-1);
                }
            }
        }
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        cout<<f(s)<<endl;
    }
}