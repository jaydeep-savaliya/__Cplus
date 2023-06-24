#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &prices,int idx,int buy,int n,int fee,vector<vector<int>> &dp){
    if(idx==n) return 0;
    if(dp[idx][buy]!=-1) return dp[idx][buy];
    int profit;
    if(buy==0){
        profit = max(0+solve(prices,idx+1,0,n,fee,dp),-prices[idx]+solve(prices,idx+1,1,n,fee,dp));
    }
    if(buy==1){
        profit = max(0+solve(prices,idx+1,1,n,fee,dp),prices[idx]-fee+solve(prices,idx+1,0,n,fee,dp));
    }
    return dp[idx][buy] = profit;
}
int maxProfit(vector<int> &prices,int fee){
    int n = prices.size();
    vector<vector<int>> dp(n,vector<int>(2,-1));
    int ans = solve(prices,0,0,n,fee,dp);
    return ans;
}
int main(){
    vector<int> prices{1,3,7,5,10,3};
    int fee = 3;
    int ans = maxProfit(prices,fee);
    cout<<ans;
}