#include <bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums){
    int n = nums.size();
    int x = 0;
    int y = nums[0];
    for(int i=1;i<n;i++){
        int add = x+nums[i];
        int sub = y+0;
        int ans = max(add,sub);
        x = y;
        y = ans;
    }
    return y;
}
int main(int argc, char const *argv[])
{
    vector<int> nums{2,1,1,2};
    cout<<rob(nums);
    return 0;
}
