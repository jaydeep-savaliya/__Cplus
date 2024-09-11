#include <bits/stdc++.h>
using namespace std;
int minOperations(vector<int>&nums,int x){
    int n = nums.size();
    int target  =0;
    for(auto y:nums)target+=y;
    target-=x;
    if(target==0) return n;
    int max_len = 0;
    int left = 0;
    int curr_sum = 0;
    for(int i=0;i<n;i++){
        curr_sum+=nums[i];
        while(left<=i && curr_sum>target){
            curr_sum-=nums[left];
            left++;
        }
        if(curr_sum==target){
            max_len = max(max_len,i-left+1);
        }
    }
    return max_len?n-max_len:-1;
}
int main(){
    vector<int> nums{1,1,4,3,2};
    int x = 5;
    int ans = minOperations(nums,x);
    cout<<ans;
}