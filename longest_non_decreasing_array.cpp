#include <bits/stdc++.h>
using namespace std;
int maxNonDecreasingLength(vectora<int> &nums1,vector<int> &nums2){
    int n = nums1.size();
    vector<int> nums(n,-1);
    nums[0] = min(nums1[0],nums2[0]);
    for(int i=1;i<n;i++){
        int mini = min(nums1[i],nums2[i]);
        int maxi = max(nums1[i],nums2[i]);
        if(nums[i-1]<=mini){
            nums[i] = mini;
        }else if(nums[i-1]>maxi) nums[i]=mini;
        else nums[i] = maxi;
    }
    for(auto x:nums){
        cout<<x<<" ";
    }cout<<endl;
    int ans = 1;
    int length = 1;
    for(int i=1;i<n;i++){
        if(nums[i-1]<=nums[i]){
            length++;
            ans = max(ans,length);
        }else{
            length = 1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums1{1,3,2,1};
    vector<int> nums2{2,2,3,4};
    int ans = maxNonDecreasingLength(nums1,nums2);
    cout<<ans;
}