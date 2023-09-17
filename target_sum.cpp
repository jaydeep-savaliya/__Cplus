#include <bits/stdc++.h>
using namespace std;
int solve(int sum,int currsum,int idx,vector<int>& nums,int target,vector<vector<int>> &dp){
        if(idx==nums.size()){
            if(currsum==target) return 1;
            else return 0;
        }
        if(dp[idx][currsum+sum]!=-1) return dp[idx][currsum+sum];
        int take = solve(sum,currsum+nums[idx],idx+1,nums,target,dp);
        int nottake = solve(sum,currsum-nums[idx],idx+1,nums,target,dp);
        return dp[idx][currsum+sum]=take+nottake;
    }
int findTargetSumWays(vector<int> &nums,int target){
    int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        vector<vector<int>> dp(n,vector<int>(2*sum+1,-1));
        if(target>sum || target<-sum) return 0;
        return solve(sum,0,0,nums,target,dp);
}
int main(){
    vector<int> nums{1,1,1,1,1};
    int target = 3;
    int ans = findTargetSumWays(nums,target);
    cout<<ans;
}