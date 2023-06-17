#include <bits/stdc++.h>
using namespace std;
int sumDistance(vector<int>& nums, string s, int d){
    int mod = 1e9 + 7;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                nums[i] = nums[i]+1;
            }else{
                nums[i] = nums[i]-1;
            }
        }
        d--;
        while(d){
            int i = 0;
            while(i<n){
                if(nums[i]==nums[i+1]){
                    nums[i]-=1;
                    nums[i+1]+=1;
                    i+=2;
                }else{
                    if(s[i]=='R'){
                        s[i]+=1;
                    }else if(s[i]=='L'){
                        s[i]-=1;
                    }
                    i++;
                }
            }
            d--;
        }
        for(auto x:nums){
            cout<<x<<" ";
        }
        return 1;
}
int main(){
    vector<int> nums{-2,0,2};
    string s = "RLL";
    int d = 3;
    int ans = sumDistance(nums,s,d);
    // cout<<ans;
}