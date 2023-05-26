#include <bits/stdc++.h>
using namespace std;
 void DFS(int row,int col,vector<vector<char>>& grid,vector<vector<int>> &vis){
            int n = grid.size();
            int m=grid[0].size();
            vis[row][col]=1;
            vector<int> del_row{1,-1,0,0};
            vector<int> del_col{0,0,1,-1};
            for(int i=0;i<4;i++){
                int nrow = del_row[i]+row;
                int ncol = del_col[i]+col;
                if(ncol>=0 && ncol<m && nrow>=0 && nrow<n && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                        vis[nrow][ncol]=1;
                        DFS(nrow,ncol,grid,vis);
                    }
            }
        }
int main(){
    vector<vector<char>> grid{{'0','1'},{'1','0'},{'1','1'},{'1','0'}};
        int n = grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                       DFS(row,col,grid,vis);
                       count++;
                }
            }
        }
    cout<<count;
}