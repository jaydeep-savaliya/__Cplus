#include <bits/stdc++.h>
using namespace std;
string restoreString(string s,vector<int> &indices){
    map<int,char> m;
    string ans = "";
    for(int i=0;i<indices.size();i++){
        m.insert({indices[i],s[i]});
    }
    for(auto c:m){
        ans.push_back(c.second);
    }
    return ans;
}
int main(){
    string s = "codeleet";
    vector<int> indices{4,5,6,7,0,2,1,3};
    string ans = restoreString(s,indices);
    cout<<ans;
}