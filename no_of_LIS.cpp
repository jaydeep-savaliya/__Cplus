#include <bits/stdc++.h>
using namespace std;
int findNumberOfLIS(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,1),cut(n,1);
    int max_ans = INT_MIN;
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i] && 1+dp[j]>dp[i]){
                dp[i] = 1+dp[j];
                cut[i] = cut[j];
            }else if(nums[j]<nums[i] && 1+dp[j]==dp[i]){
                cut[i]+=cut[j];
            }
        }
        max_ans = max(max_ans,dp[i]);
    }
    for(int i=0;i<n;i++){
        if(max_ans == dp[i]) ans+=cut[i];
    }
    return ans;
}
int main(){
    vector<int> nums{2,2,2,2,2};
    int ans = findNumberOfLIS(nums);
    cout<<ans;
}