#include <bits/stdc++.h>
using namespace std;
int solve(int n,vector<int> &dp){
    if(n<=2) return n;
    if(dp[n]!=-1) return dp[n];
    dp[n] = solve(n-1,dp)+solve(n-2,dp);
    return dp[n];
}
int main(){
    int n = 3;
    vector<int> dp(n+1,-1);
    int ans = solve(n,dp);
    cout<<ans;
}