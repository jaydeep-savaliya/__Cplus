#include <bits/stdc++.h>
using namespace std;
void DFS(int idx,vector<int> adj[],vector<bool> &vis){
    vis[idx] = true;
    for(auto x:adj[idx]){
        if(!vis[x]){
            DFS(x,adj,vis);
        }
    }
}
int makeConnected(int n,vector<vector<int>> &connections){
    int len = connections.size();
    if(len<n-1) return -1;
    vector<bool> vis(n,false);
    vector<int> adj[n];
    for(auto x:connections){
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            count++;
            DFS(i,adj,vis);
        }
    }
    return count-1;
}
int main(){
    int n = 6;
    vector<vector<int>> connections{{0,1},{0,2},{0,3},{1,2},{1,3}};
    int ans=makeConnected(n,connections);
    cout<<ans;
}
