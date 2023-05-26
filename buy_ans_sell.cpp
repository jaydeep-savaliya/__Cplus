#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={7,6,4,3,1};
    int n = nums.size();
    int max_sum = INT_MIN;
    int minsofar = nums[0];
    for(int i=1;i<n;i++){
        minsofar = min(minsofar,nums[i]);
        max_sum = max(max_sum,nums[i]-minsofar);
    }
    cout<<max_sum;
}