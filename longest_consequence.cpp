#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    int n = nums.size();
    if(n==1 || n==0){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int count = 1;
    int ans = INT_MIN;
    for(int i=0;i<n-1;i++){
        if(nums[i]+1==nums[i+1]){
            count++; 
        }else{
            count=1;
        }
        ans= max(ans,count);
    }
    cout<<ans;
}