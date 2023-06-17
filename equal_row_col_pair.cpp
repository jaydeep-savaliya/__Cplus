#include <bits/stdc++.h>
using namespace std;
int equalPairs(vector<vector<int>> &grid){
    int n = grid.size();
        map<vector<int>,int> m;
        for(int i=0;i<n;i++){
            m[grid[i]]++;
        }
        int ans = 0;
        for(int j=0;j<n;j++){
            vector<int> curr;
            for(int i=0;i<grid[0].size();i++){
                curr.push_back(grid[i][j]);
            }
            ans+=m[curr];
        }
        return ans;
}
int main(){
    vector<vector<int>> grid{{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};
    int ans = equalPairs(grid);
    cout<<ans;
}