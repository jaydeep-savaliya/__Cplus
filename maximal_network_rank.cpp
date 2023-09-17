#include <bits/stdc++.h>
using namespace std;
int maximalNetworkRank(int n, vector<vector<int>>& roads){
    vector<int>adj[n+1];
    for(auto &x:roads){
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    for(auto &x:adj){
        sort(x.begin(),x.end());
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int curr = adj[i].size()+adj[j].size();
            int idx = lower_bound(adj[i].begin(),adj[i].end(),j)-adj[i].begin();
            if(idx!=adj[i].size()){
                if(adj[i][idx]==j){
                    curr--;
                }
            }
            ans = max(ans,curr);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> roads{{0,1},{0,3},{1,2},{1,3}};
    int n = 4;
    int ans = maximalNetworkRank(n,roads);
    cout<<ans;
}