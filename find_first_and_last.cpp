#include <bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> &nums,int target){
    int l = 0;
    int h = nums.size()-1;
    while(l<h){
        int mid = l + (h-l)/2;
        if(nums[mid]<target){
            l = mid+1;
        }else{
            h = mid-1;
        }
    }
    return l;
}
vector<int> searchRange(vector<int> &nums,int target){
    int start = lowerbound(nums,target);
    int end=lowerbound(nums,target+1)-1;
    if(start<nums.size() && nums[start]==target){
        return {start,end};
    }
    return {-1,-1};
}
int main(){
    vector<int> nums{5,7,7,8,8,10};
    int target = 7;
    vector<int> ans = searchRange(nums,target);
    for(auto x:ans){
        cout<<x<<" ";
    }
}