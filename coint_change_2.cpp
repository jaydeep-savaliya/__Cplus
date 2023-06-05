#include <bits/stdc++.h>
using namespace std;
int solve(int amount,vector<int> &coins,int i,vector<vector<int>> dp){
    if(i<0 || amount<0) return 0;
    if(amount==0) return 1;
    if(dp[i][amount]!=-1) return dp[i][amount];
    return dp[i][amount] = solve(amount-coins[i],coins,i,dp) + solve(amount,coins,i-1,dp);

}
int change(int amount,vector<int> &coins){
    vector<vector<int>> dp(301,vector<int>(5001,-1));
    return solve(amount,coins,coins.size()-1,dp);
}
int main(){
    int amount = 3;
    vector<int> coins{2};
    int ans = change(amount,coins);
    cout<<ans;
}