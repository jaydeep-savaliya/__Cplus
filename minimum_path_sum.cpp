#include <bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>> &grid){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> prev(m,0);
    for(int i=0;i<n;i++){
        vector<int> temp(m,0);
        for(int j=0;j<m;j++){
            if(i==0 && j==0) temp[j] = grid[i][j];
            else{
                int up = grid[i][j];
                if(i>0){
                    up+=prev[j];
                }else up+=1e9;

                int left = grid[i][j];
                if(j>0) left+=temp[j-1];
                else left+=1e9;
                temp[j] = min(up,left);
            }

        }
        prev = temp;
    }
    return prev[n-1];
}
int main(){
    vector<vector<int>> grid{{1,3,1},{1,5,1},{4,2,1}};
    int ans = minPathSum(grid);
    cout<<ans;
}