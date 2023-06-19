#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums,int target){
    int n = nums.size();
    map<int,int>m;
    for(int i=0;i<n;i++){
        if(m.find(target-nums[i])!=m.end()) return {m[target-nums[i]],i+1};
        else m.insert({nums[i],i+1});
    }
    return {};
}
int main(){
    vector<int> nums{0,0,2,5};
    int target = 0;
    vector<int> ans = twoSum(nums,target);
    
    for(auto x:ans){
        cout<<x<<" ";
    }
}