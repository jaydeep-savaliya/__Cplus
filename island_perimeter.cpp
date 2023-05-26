#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> grid{{0,1,0,0,1},{1,1,1,0,1},{0,1,0,0,1},{1,1,0,0,1}};
    int n = grid.size();
     int m = grid[0].size();
        int ans = 0;
        int length = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    ans++;
                if(i<n-1 && grid[i+1][j]==1) length++;
                if(j<m-1 && grid[i][j+1]==1) length++;
                }
            }
        }
        cout<< (ans*4 - length*2);
}