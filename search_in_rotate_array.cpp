#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums,int target){
    int l = 0;
    int h = nums.size()-1;
    while(l<=h){
        int mid = (l+h)>>1;
        if(nums[mid]==target) return mid;
        if(nums[l]<=nums[mid]){
            if(nums[l]<=target && nums[mid]>=target){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }else{
            if(nums[mid]<=target && nums[h]>=target){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        
    }
    return -1;
}
int main(){
    vector<int> nums{4,5,6,7,0,1,2};
    int target = 0;
    int ans = search(nums,target);
    cout<<ans;
}