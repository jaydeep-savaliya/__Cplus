#include <bits/stdc++.h>
using namespace std;
int semiOrderedPermutation(vector<int> &nums){
    int n = nums.size();
    int max_idx = 0;
    int min_idx = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==1) min_idx = i;
        if(nums[i]==n) max_idx = i;
    }
    if(max_idx>min_idx) return (n+min_idx-max_idx-1);
    return (n+min_idx-max_idx-1)-1;
}
int main(){
    vector<int> nums{2,4,1,3};
    int ans = semiOrderedPermutation(nums);
    cout<<ans;
}