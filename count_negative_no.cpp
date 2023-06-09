#include <bits/stdc++.h>
using namespace std;
int countNegatives(vector<vector<int>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    int row = n-1;
    int col = 0;
    int count = 0;
    while(row>=0 && col<m){
        if(grid[row][col]<0){
            count+=m-col;
            row--;
        }else{
            col++;
        }
    }
    return count;
}
int main(){
    vector<vector<int>> grid{{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    int ans = countNegatives(grid);
    cout<<ans;
}