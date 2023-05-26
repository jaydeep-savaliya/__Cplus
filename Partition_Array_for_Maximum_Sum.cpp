#include <bits/stdc++.h>
using namespace std;
int f(int idx,vector<int> &nums,int k,vector<int> &dp){
    int n = nums.size();
    if(idx==n) return 0;
    if(dp[idx]!=-1) return dp[idx];
    int len = 0;
    int maxi = INT_MIN;
    int max_sum = INT_MIN;
    for(int i=idx;i<min(idx+k,n);i++){
        len++;
        maxi = max(maxi,nums[i]);
        int sum = len*maxi + f(i+1,nums,k,dp);
        max_sum = max(max_sum,sum);
    }
    return max_sum;
}
int main(){
    vector<int> nums{1,15,7,9,2,5,10};
    int k = 3;
    int n = nums.size();
    vector<int> dp(n,-1);
    cout<<f(0,nums,k,dp);
}