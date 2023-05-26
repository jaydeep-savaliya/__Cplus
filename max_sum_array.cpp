#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{3,-1,0,2};
    int n = nums.size();
    int k = 3;
    sort(nums.begin(),nums.end());
    int i =0;
    while(nums[i]<0 && i<n){
        if(k<=0) break;
        nums[i]*=-1;
        i++;
        k--;
    }
    sort(nums.begin(),nums.end());
    int sum = 0;
    if(k>0 && nums[0]!=0){
        if(k%2!=0)
            nums[0] *= -1;
        for(auto x:nums){
            sum+=x;
        }
    }
    cout<<sum;
}