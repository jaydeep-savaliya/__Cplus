#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
vector<int> mem;
int solve(string s,int idx){
    if(idx>=s.size()) return 0;
    if(mem[idx]!=-1) return mem[idx];
    int res = 1+solve(s,idx+1);
    for(int i=1;i<=idx+s.size();i++){
        string t = s.substr(idx,i);
        if(st.count(t)){
            res = min(res,solve(s,idx+i));
        }
    }
    return mem[idx] = res;
}
int minExtraChar(string s, vector<string>& dictionary) {
        mem.resize(s.size()+1,-1);
        for(auto i:dictionary){
            st.insert(i);
        }
        return solve(s,0);
}

int main() {
    string s= "sayhelloworld";
    vector<string> dictionary{"hello","world"};
    int ans = minExtraChar(s,dictionary);
    cout<<ans;
}
