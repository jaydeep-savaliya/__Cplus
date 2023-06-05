#include <bits/stdc++.h>
using namespace std;
unordered_set<int> st;
void DFS(int node,vector<int> adj[]){
    if(st.find(node)!=st.end()) return;
    st.insert(node);
    for(auto x:adj[node]){
        DFS(x,adj);
    }
}
bool validPath(int n, vector<vector<int>>& edges, int source, int destination){
    vector<int> adj[n];
    for(auto x:edges){
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    DFS(source,adj);
    return st.find(destination)!=st.end();
}
int main(){
    vector<vector<int>> edges{{0,1},{0,2},{3,5},{5,4},{4,3}};
    int n = 6;
    int source = 0;
    int destination = 5;
    bool ans = validPath(n,edges,source,destination);
    if(ans){
        cout<<"true";
    }else{
        cout<<"false";
    }
}