#include "bits/stdc++.h"
using namespace std;
int longestSubarray(vector<int> &nums){
    int n = nums.size();
    int ans=0;
    int i=0,j=0;
    int zcnt = 0;
    while(i<n){
        if(nums[i]==0) zcnt++;
        if(zcnt==2){
            while(zcnt==2){
                if(nums[j]==0) zcnt--;
                j++;
            }
        }
        ans = max(ans,i-j);
        i++;
    }
    return ans;
}
int main(){
    vector<int> nums{0,1,1,1,0,1,1,0,1};
    int ans = longestSubarray(nums);
    cout<<ans;
}