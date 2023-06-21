#include <bits/stdc++.h>
using namespace std;
int shortestPathBinaryMatrix(vector<vector<int>> &grid){
    queue<pair<pair<int,int>,int>> q;
        q.push({{0,0},1});
        if(grid[0][0]!=0) return -1;
        if(grid[0][0]==0 && grid.size()==1 && grid[0].size()==1) return 1;
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid.size(),false));
        visited[0][0] = true;
        while(!q.empty()){
            pair<int,int> p = q.front().first;
            int a = p.first;
            int b = p.second;
            int length = q.front().second;
            q.pop();
            vector<pair<int,int>>neighbours = {{0,1}, {0,-1}, {1,0}, {-1,0},
                                               {1,1}, {-1,-1}, {1,-1}, {-1,1}};
            for(pair<int,int> x:neighbours){
                int nx = x.first + a;
                int ny = x.second+b;
                if(nx>=0 && ny>=0 && nx<grid.size() && ny<grid[0].size() && grid[nx][ny]==0 && !visited[nx][ny]){
                    q.push({{nx,ny},length+1});
                    visited[nx][ny] = true;
                    if(nx==grid.size()-1 && ny==grid[0].size()-1) return length+1;
                }
            }
        }
        return -1;
}
int main(){
    vector<vector<int>> grid{{0,1},{1,0}};
    int ans = shortestPathBinaryMatrix(grid);
    cout<<ans;
}