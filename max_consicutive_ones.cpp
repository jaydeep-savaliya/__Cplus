#include <bits/stdc++.h>
using namespace std;
int longestOnes(vector<int> &nums,int k){
    int i = 0;
    int j = 0;
    int ans = INT_MIN;
    while(i<nums.size() && j<nums.size()){
        if(k!=0 || nums[j]==1){
            if(nums[j]==0) k--;
            j++;
        }
        else if(k==0){
            if(nums[i]==0) k++;
            i++;
        }
        ans = max(ans,j-i);
    }
    return ans;
}
int main(){
    vector<int> nums{0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    int ans = longestOnes(nums,k);
    cout<<ans;
}