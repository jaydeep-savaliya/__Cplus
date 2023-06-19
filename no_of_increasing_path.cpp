#include <bits/stdc++.h>
using namespace std;
int mod = 1000000007;
int dr[4]={1,0,-1,0};
int dc[4]={0,1,0,-1};
bool isValid(int i,int j,vector<vector<int>> &grid){
    if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return false;
    return true;
}
int DFS(int r,int c,vector<vector<int>> &dp,vector<vector<int>> &grid){
    if(dp[r][c]!=-1) return dp[r][c];
    int ans = 1;
    for(int i=0;i<4;i++){
        int nr = r+dr[i];
        int nc = c+dc[i];
        if(isValid(nr,nc,grid) && grid[nr][nc]>grid[r][c]){
            ans = (ans%mod + DFS(nr,nc,dp,grid)%mod)%mod;
        }
    }
    return dp[r][c] = ans;
}
int countPaths(vector<vector<int>> &grid){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    long long count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            count = (count%mod + DFS(i,j,dp,grid)%mod)%mod;
        }
    }
    return (int)count%mod;
}
int main(){
    vector<vector<int>> grid{{1},{3}};
    int ans = countPaths(grid);
    cout<<ans;
}