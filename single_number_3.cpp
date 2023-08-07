#include <bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int> &nums){
    long long xor_val = 0;
    int ans1=0;
    int ans2=0;
    for(auto x:nums){
        xor_val^=x;
    }
    long long bit = xor_val&(-xor_val);
    for(auto x:nums){
        if(bit&x){
            ans1^=x;
        }else{
            ans2^=x;
        }
    }
    return {ans1,ans2};
}
int main(){
    vector<int> nums{1,2,1,3,2,5};
    vector<int>ans = singleNumber(nums);
    for(auto x:ans){
        cout<<x<<" ";
    }
}