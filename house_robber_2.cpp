#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&nums,int end,int n,vector<int>&dp){
    if(n==end) return nums[end];
    if(n<end) return 0;
    if(dp[n]!=-1) return dp[n];
    int pick = nums[n]+solve(nums,end,n-2,dp);
    int notpick = 0 + solve(nums,end,n-1,dp);
    return dp[n]= max(pick,notpick);
}
int rob(vector<int>&nums){
    int n = nums.size();
    vector<int> dp1(n+1,-1);
    vector<int> dp2(n+1,-1);
    int s1 = solve(nums,0,n-2,dp1);
    int s2 = solve(nums,1,n-1,dp2);
    return max(s1,s2);
}
int main(int argc, char const *argv[])
{
    vector<int>nums{2,3,2};
    cout<<rob(nums);
    return 0;
}
