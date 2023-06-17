#include <bits/stdc++.h>
using namespace std;
bool DFS(int start,int col,vector<vector<int>> &graph,int color[]){
    color[start] = col;
    for(auto x:graph[start]){
        if(color[x]==-1){
            if(DFS(x,!col,graph,color)==false) return false;
        }else if(color[x]==col) return false;
    }
    return true;
}
bool isBipartite(vector<vector<int>> &graph){
    int color[graph.size()];
    for(int i=0;i<graph.size();i++){
        color[i]=-1;
    }
    for(int i=0;i<graph.size();i++){
        if(color[i]==-1){
            if(DFS(i,0,graph,color)==false) return false;
        }
    }
    return true;
}
int main(){
    vector<vector<int>> graph{{1,3},{0,2},{1,3},{0,2}};
    bool ans = isBipartite(graph);
    cout<<ans;
}