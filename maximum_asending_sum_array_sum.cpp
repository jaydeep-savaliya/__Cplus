#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{10,20,30,5,10,50};
    int n = nums.size();
    int max_sum = nums[0];
    int sum = nums[0];
    for(int i=1;i<n;i++){
        if(nums[i-1]<nums[i]){
            sum+=nums[i];
        }else{
            max_sum = max(max_sum,sum);
            sum = nums[i];
        }
    }
    cout<<max(max_sum,sum);
}