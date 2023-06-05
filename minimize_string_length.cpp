#include <bits/stdc++.h>
using namespace std;
int minmize_string(string s){
    unordered_map<int,int> m;
    int n = s.size();
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    return m.size();
}
int main(){
    string s = "aaabbb";
    int ans = minmize_string(s);
    cout<<ans;
}