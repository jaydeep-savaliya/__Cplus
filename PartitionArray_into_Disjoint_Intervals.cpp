#include <bits/stdc++.h>
using namespace std;
int partitionDisjoint(vector<int> &nums){
    int n = nums.size();
    int max_sum = nums[0];
    int min_sum = nums[0];
    int ans = 0;
    for(int i=1;i<n;i++){
        if(nums[i]<min_sum){
            ans = i;
            min_sum = max_sum;
        }
        max_sum = max(nums[i],max_sum);
    }
    return ans+1;
}
int main(){
    vector<int> nums{1,1,1,0,6,12};
    int ans = partitionDisjoint(nums);
    cout<<ans;
}