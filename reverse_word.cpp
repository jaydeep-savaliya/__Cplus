#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s){
    int n = s.size();
    vector<string> v;
    string ref = "";
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            v.push_back(ref);
            ref.clear();
        }else{
            ref.push_back(s[i]);
        }
    }
    v.push_back(ref);
    string ans= "";
    for(int i=v.size()-1;i>=0;i--){
        if(i!=0){
            ans+=v[i];
            ans+='.';
        }else{
            ans+=v[i];
        }
    }
    return ans;
}
int main(){
    string s = "i.like.this.program.very.much";
    string ans = reverseWords(s);
    cout<<ans;
}