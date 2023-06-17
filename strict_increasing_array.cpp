#include <bits/stdc++.h>
using namespace std;
int min_operations(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,1);
    int ans = 1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j] && dp[i]<dp[j]+1 && (i-j)<=nums[i]-nums[j] ){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        ans = max(ans,dp[i]);
    }
    return n-ans;
}
int main(){
    vector<int> nums{1, 2, 3, 6, 5, 4};
    int ans = min_operations(nums);
    cout<<ans;
}