#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> &ans,int n,int open,int close,string ans_str){
    if(ans_str.size()==n*2){
        ans.push_back(ans_str);
        // return;
    }
    if(open<n) solution(ans,n,open+1,close,ans_str+"(");
    if(close<open) solution(ans,n,open,close+1,ans_str+")");
    return ans;
}
int main(){
    int n = 3;
    vector<string> ans;
    solution(ans,n,0,0,"");
    for(auto x:ans){
        cout<<x<<" ";
    }
}