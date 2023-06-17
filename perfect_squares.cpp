#include <bits/stdc++.h>
using namespace std;
int dp[105][10005];
int solve(vector<int> &arr,int i,int n,int sum){
    if(sum==0) return 0;
    if(i>=n || sum<0) return INT_MAX-1000;
    if(dp[i][sum]!=-1) return dp[i][sum];
    int mini = INT_MAX;
    if(arr[i]<=sum){
        mini = min(mini,1+solve(arr,i,n,sum-arr[i]));
    }
    mini = min(mini,solve(arr,i+1,n,sum));
    return dp[i][sum] = mini;
}
int numSquares(int n){
    vector<int> arr;
    for(int i=1;i*i<=n;i++){
        arr.push_back(i*i);
    }
    memset(dp,-1,sizeof(dp));
    return solve(arr,0,arr.size(),n);
}
int main(){
    int n = 13;
    int ans = numSquares(n);
    cout<<ans;
}