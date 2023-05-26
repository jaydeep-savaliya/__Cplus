#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums={{2},{3,4},{6,5,1},{4,1,8,3}};
    int n  = nums.size();
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        ans[i]=nums[n-1][i];
    }
   
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<nums[i].size();j++){
            ans[j] = min(ans[j],ans[j+1]) + nums[i][j];
        }
    }
    cout<<ans[0];
}