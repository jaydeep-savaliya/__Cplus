#include <bits/stdc++.h>
using namespace std;
vector<int> sortByBits(vector<int>& nums){
    sort(nums.begin(),nums.end(),[](int a,int b){
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        return (countA==countB)?a<b:countA<countB;
    });
    return nums;
}
int main(){
    vector<int> nums{0,1,2,3,4,5,6,7,8};
    int n = nums.size();
    vector<int> ans = sortByBits(nums);
    for(auto x:ans){
        cout<<x<<" ";
    }
}