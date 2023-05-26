#include<bits/stdc++.h>
using namespace std;
void DFS(int idx,vector<int> adj[],vector<int> &vis){
    vis[idx]=1;
    for(auto x:adj[idx]){
        if(!vis[x]){
            DFS(x,adj,vis);
        }
    }
}
void BFS(int idx,vector<int> adj[],vector<int> &vis){
    vis[idx]=1;
    queue<int> q;
    q.push(idx);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto x:adj[node]){
            if(!vis[x]){
                vis[x]=1;
                q.push(x);
            }
        }
    }
}
int main(){
    vector<vector<int>> graph{{1,0,0},{0,1,0},{0,0,1}};
    int n = graph.size();
    vector<int> adj[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]==1 && i!=j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    vector<int> vis(n,0);
    int count = 0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            count++;
            DFS(i,adj,vis);
            BFS(i,adj,vis);
        }
    }
    cout<<count;
}