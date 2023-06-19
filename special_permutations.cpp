#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int solve(vector<int> &nums,int idx,int i,int mask){
    if(i==nums.size()) return 1;
    if(dp[idx+1][mask]!=-1) return dp[idx+1][mask];
    int ans = 0;
    for(int j=0;j<nums.size();j++){
        if(mask & (1<<j)) continue;
        if(idx==-1 || nums[idx]%nums[j]==0 || nums[j]%nums[idx]==0){
            ans+=solve(nums,j,i+1,mask|(1<<j));
        }
        ans%=1000000007;
    }
    return dp[idx+1][mask] = ans;
}
int specialPerm(vector<int> &nums){
    dp.resize(20,vector<int>((1<<14)+5,-1));
    return solve(nums,-1,0,0);
}
int main(){
    vector<int> nums{1,4,3};
    int ans = specialPerm(nums);
    cout<<ans;
}