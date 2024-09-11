#include <bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int> rank,parent;
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
    }
    int findUpar(int node){
        if(node==parent[node]) return node;
        parent[node] = findUpar(parent[node]);
    }
    void UnionByRank(int u,int v){
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }else if(rank[ulp_v]<rank[ulp_u]){
            parent[ulp_v] = ulp_u;
        }else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
int main(){
    DisjointSet ds(7);
    priority_queue<vector<int>,greater<int> >
    ds.UnionByRank(1,2);
    ds.UnionByRank(2,3);
    return 0;
}