#include <bits/stdc++.h>
using namespace std;
int solve(int idx,int prev,vector<int> &nums,vector<vector<int>> &dp){
        if(idx>=nums.size()) return 0;
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
        int ans = 0;
        int nottake = 0+solve(idx+1,prev,nums,dp);
        int take = 0;
        if(prev==-1 || nums[idx]>nums[prev]){
            take = 1+solve(idx+1,idx,nums,dp);
        }
        ans = max(take,nottake);
        return dp[idx][prev+1] = ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(0,-1,nums,dp);
    }
int main(){
    vector<int> nums{10,9,2,5,3,7,101,18};
    int ans = lengthOfLIS(nums);
    cout<<ans;
}