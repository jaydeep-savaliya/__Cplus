#include <bits/stdc++.h>
using namespace std;
int stringwithminimumindex(string s){
    int n = s.size();
    map<char,int> m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[s[i]]==1) return i;
    }
    return -1;
}
int main(){
    string s = "leetcode";
    int ans = stringwithminimumindex(s);
    cout<<ans;
}