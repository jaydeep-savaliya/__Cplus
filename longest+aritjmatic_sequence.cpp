#include <bits/stdc++.h>
using namespace std;
int longestArithSeqLength(vector<int> &nums){
    int n = nums.size();
    unordered_map<int,int> m[n+1];
    int ans = 0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            int diff = nums[i]-nums[j];
            int count = 1;
            if(m[j].count(diff)){
                count = m[j][diff];
            }
            m[i][diff] = 1+count;
            ans = max(ans,m[i][diff]);
        }
    }
    return ans;
}
int main(){
    vector<int> nums{3,6,9,12};
    int ans = longestArithSeqLength(nums);
    cout<<ans;
}