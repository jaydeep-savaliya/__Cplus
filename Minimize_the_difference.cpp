#include <bits/stdc++.h>
using namespace std;
int dp[8000][71];
int n,m;
int solve(vector<vector<int>> &mat,int idx,int sum,int target){
    if(idx>=n) return abs(sum-target);
    if(dp[sum][idx]!=-1) return dp[sum][idx];
    int ans = INT_MAX;
    for(int i=0;i<m;i++){
        ans = min(ans,solve(mat,idx+1,sum+mat[idx][i],target));
        if(ans==0) break;
    }
    return dp[sum][idx]=ans;
}
int main(){
    // vector<vector<int>> mat{{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> mat{{1},{2},{3}};
    n=mat.size();
    m=mat[0].size();
    int target = 100;
    memset(dp,-1,sizeof dp);
    int solution = solve(mat,0,0,target);
    cout<<solution<<endl;
}