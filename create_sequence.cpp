#include <bits/stdc++.h>
using namespace std;
void solve(long long a,long long n,vector<long long> &ans){
    if(a>n) return;
    if(a!=0) ans.push_back(a);
    solve(a*10 + 2,n,ans);
    solve(a*10 + 5,n,ans); 
}
vector<long long> createSequence(long long n){
    vector<long long> ans;
    solve(0,n,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    long long n = 100;
    vector<long long> ans = createSequence(n);
    for(auto x:ans){
        cout<<x<<" ";
    }
}