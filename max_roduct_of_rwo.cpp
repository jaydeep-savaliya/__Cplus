#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &nums){
    int n = nums.size();
    // multimap<int,int> m;
    // for(int i=0;i<n;i++){
    //     m.insert({nums[i],i});
    // }
    // auto it = m.rbegin();
    // int i = it->second;
    // it++;
    // int j = it->second;
    // return (nums[i]-1) * (nums[j]-1);
    int ans = INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans= max(ans,(nums[i]-1)*(nums[j]-1));
        }
    }
    return ans;
}
int main(){
    vector<int> nums{3,4,5,2};
    int ans = maxProduct(nums);
    cout<<ans;
}