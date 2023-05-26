#include<bits/stdc++.h> 
using namespace std; 
void DFS(int node,vector<int> adj[],int vis[],vector<int> &ls){
    vis[node]=1;
    ls.push_back(node);
    for(auto x:adj[node]){
        if(!vis[x]){
            DFS(x,adj,vis,ls);
        }
    }
}
vector<int> DFSofGraph(vector<int> adj[],int V){
    int vis[V]={0};
  
    vector<int> ls;
    for(int i=0;i<V;i++){
        if(!vis[i])
            DFS(i,adj,vis,ls);
    }
    return ls;
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
int main(){
    int V=7;
	vector<int> adj[V]; 
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);
   vector<int> ans = DFSofGraph(adj,V);
   for(auto x:ans){
    cout<<x<<" ";
   }
    return 0;
}