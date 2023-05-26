#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> grid{{0,1,1},{1,0,1},{0,0,1}};
    int n= grid.size();
    int m = grid[0].size();
    map<int,int> m1,m2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                m1[i]++;
                m2[j]++;
            }
        }
    }
    vector<vector<int>> ans(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j] = m1[i]+m2[j] - (n-m1[i] + m-m2[j]);
        }
    }
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }cout<<endl;
    }
    
}