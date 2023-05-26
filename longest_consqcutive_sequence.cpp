#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{0,3,7,2,5,8,4,6,0,1};
    vector<int> ans;
    int ans_max = INT_MIN;
    int count = 0;
    sort(nums.begin(),nums.end());
    ans.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        if(ans.back()+1==nums[i]){
            ans.push_back(nums[i]);
            count++;
        }else if(ans.back()+1!=nums[i] && ans.back()!=nums[i]){
            ans.clear();
            ans.push_back(nums[i]);
            count = 1;
        }
        ans_max = max(ans_max,count);
    }
    cout<<ans_max;
}