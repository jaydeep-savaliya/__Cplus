#include <bits/stdc++.h>
using namespace std;
vector<int> topologicalsort(int V,vector<int> adj[]){
    int indegree[V]={0};
    for(int i=0;i<V;i++){
        for(auto x:adj[i]){
            indegree[x]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0) q.push(i);
    }
    vector<int> ans;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        ans.push_back(u);
        for(auto x:adj[u]){
            if(--indegree[x]==0){
                q.push(x);
            }
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }

}
int main(){
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
    topologicalsort(V,adj);
}