#include <bits/stdc++.h>
using namespace std;
long long ans  = INT_MIN;
void solve(vector<int> &nums,int idx,long long product,int size){
    if(idx==nums.size()){
        if(size!=0) ans = max(ans,product);
        return;
    }
    solve(nums,idx+1,product*nums[idx],size+1);
    solve(nums,idx+1,product,size);
}
long long maxStrength(vector<int> &nums){
    solve(nums,0,1,0);
    return ans;
}
int main(){
    vector<int> nums{3,-1,-5,2,5,-9};
    long long ans = maxStrength(nums);
    cout<<ans;
}