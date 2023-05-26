#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{2,2,1,1,10};
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        nums[i+1]=nums[i]^nums[i+1];
    }
    for(auto x:nums){
        cout<<x<<" ";
    }
    cout<<nums[n-1];
}