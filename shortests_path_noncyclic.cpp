#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 9;
    int m = 10;
    int src = 0;
    vector<vector<int>> edge{{0,1},{0,3},{3,4},{4,5},{5,6},{1,2},{2,6},{6,7},{7,8},{6,8}};
    vector<int> adj[n];
    for(auto x:edge){
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    queue<int> q;
    q.push(src);
    int dist[n];
    for(int i=0;i<n;i++){
        dist[i]=1e9;
    }
    dist[src] = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto x:adj[node]){
            if(dist[node]+1<dist[x]){
                dist[x]=dist[node]+1;
                q.push(x);
            }
        }
    }
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        if(dist[i]!=1e9){
            ans[i]=dist[i];
        }else{
            ans[i]=-1;
        }
    }
    for(auto x:ans){
        cout<<x<<" "; 
    }
}