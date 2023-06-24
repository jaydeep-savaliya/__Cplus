#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int n;
bool subset(vector<int> &nums,int idx,int sum){
    if(sum==0) return true;
    else if(idx>=n || sum<0) return false;
    if(dp[idx][sum]!=-1) return dp[idx][sum];
    return dp[idx][sum] = subset(nums,idx+1,sum-nums[idx]) || subset(nums,idx+1,sum);
}
int main(){
    vector<int> nums{1,2,3,5};
    n = nums.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    if(sum%2) cout<<false;
    dp.resize(n+1,vector<int>(sum/2+1,-1));
    bool ans = subset(nums,0,sum/2);
    cout<<ans<<endl;
}