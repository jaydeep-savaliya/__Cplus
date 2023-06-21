#include <bits/stdc++.h>
using namespace std;
long long minCost(vector<int> &nums,vector<int> &cost){
    long long ans = LONG_LONG_MAX;
    long long l = 0;
    long long h = 1e6+2;
    int n = nums.size();
    long long a,b;
    while(l<=h){
        long long mid = l+(h-l)/2;
        a=0;
        b=0;
        for(int i=0;i<n;i++){
            a+=abs(mid-nums[i])*1LL*cost[i];
            b+=abs(mid+1-nums[i])*1LL*cost[i];
        }
        ans = min({a,b,ans});
        if(b>a) h = mid-1;
        else{
            l = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums{1,3,5,2};
    vector<int> cost{2,3,1,14};
    long long ans = minCost(nums,cost);
    cout<<ans;
}