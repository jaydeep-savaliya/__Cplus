#include <bits/stdc++.h>
using namespace std;
vector<int> shortestPath(int n, int m, vector<vector<int>>& edges){
    vector<pair<int,int>> adj[n+1];
    for(auto it:edges){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(n+1,1e9),parent(n+1);
    for(int i=0;i<n;i++) parent[i]=i;
    pq.push({0,1});
    dist[1]=0;
    while(!pq.empty()){
        auto it=pq.top();
        int node = it.second;
        int dis = it.first;
        pq.pop();
        for(auto it:adj[node]){
            int adjnode = it.first;
            int edw = it.second;
            if(dis+edw<dist[adjnode]){
                dist[adjnode]=dis+edw;
                pq.push({dist[adjnode],adjnode});
                parent[adjnode]=node;
            }
        }
    }
    if(dist[n]==1e9){
        return {-1};
    }
    vector<int> ans;
    int node = n;
    while(parent[node]!=node){
        ans.push_back(node);
        node = parent[node];
    }
    ans.push_back(1);
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<vector<int>> edges{{1,2,2},{2,5,5},{2,3,4},{1,4,1},{4,3,3},{3,5,1}};
    int n = 5;
    int m = 6;
    vector<int> ans=shortestPath(n,m,edges);
    for(auto x:ans){
        cout<<x<<" ";
    }
}