#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5};
    int n = nums.size();
    int profit = 0;
    for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1]){
            profit+=(nums[i]-nums[i-1]);
        }
    }
    cout<<profit;
}