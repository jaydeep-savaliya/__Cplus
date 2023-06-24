#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int> &nums,int k){
    int ans = 0;
    int count = 0;
    int i = 0;
    int j  =0;
    int n = nums.size();
    int odd = 0;
    while(j<n){
        if(nums[j]%2==1){
            count = 0;
            odd++;
        }
        while(odd==k){
            count++;
            if(nums[i]%2==1){
                odd--;
            }
            i++;
        }
        ans+=count;j++;
    }
    return ans;
}
int main(){
    vector<int> nums{1,1,2,1,1};
    int k = 3;
    int ans = numberOfSubarrays(nums,k);
    cout<<ans;
}