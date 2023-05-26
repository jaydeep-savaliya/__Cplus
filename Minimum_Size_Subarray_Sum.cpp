#include <bits/stdc++.h>

using namespace std;
int main(){
    int target = 11;
    vector<int> nums{1,1,1,1,1,1,1,1};
    int n = nums.size();
    int ans = INT_MAX;
    int start = 0;
    int end = 0;
    int sum = 0;
    while(end<n){
        sum+=nums[end];
        if(sum>=target){
            while(sum>=target){
                sum-=nums[start];
                start++;
            }
            ans = min(ans,end-start+2);
        }
        end++;
    }
    if(ans==INT_MAX){
        cout<<0<<endl;
    }else{
        cout<<ans;
    }
}