#include <bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>> &arr,int i,int j,map<int,vector<int>> row[],map<int,vector<int>> col[],vector<vector<int>> &dp){
    if(dp[i][j]!=-1)return dp[i][j];
        int ans=1;
        auto c=row[i].lower_bound(arr[i][j]+1);
        if(c!=row[i].end()){
            vector<int> x=(*c).second;
            for(auto ele:x){
                ans=max(ans,1+dfs(arr,i,ele,row,col,dp));
            }
        }
        auto r=col[j].lower_bound(arr[i][j]+1);
        if(r!=col[j].end()){
            vector<int> x=(*r).second;
            for(auto ele:x)
                ans=max(ans,1+dfs(arr,ele,j,row,col,dp));
        }
        return dp[i][j]=ans;
}
int maxIncreasingCells(vector<vector<int>>& arr){
    int m=arr.size(),n=arr[0].size(),i,j;
        map<int,vector<int>> row[m];
        map<int,vector<int>> col[n];
        for(i=0;i<m;++i){
            for(j=0;j<n;++j){
                int ele=arr[i][j];
                row[i][ele].push_back(j);
                col[j][ele].push_back(i);
            }
        }
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans = max(ans,dfs(arr,i,j,row,col,dp));
            }
        }
        return ans;
}
int main(){
    vector<vector<int>> arr{{3,1,6},{-9,5,7}};
    int ans = maxIncreasingCells(arr);
    cout<<ans;
}