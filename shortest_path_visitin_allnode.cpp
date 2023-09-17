#include <bits/stdc++.h>
using namespace std;
int shortestPathLength(vector<vector<int>> &graph){
    int n = graph.size(),res = 0;
    queue<tuple<int,int,int>> q;
    vector<vector<int>> seen(n,vector<int>(1<<n));
    for(int i=0;i<n;i++){
        q.push(tuple<int,int,int>(i,1<<i,0));
        seen[i][1<<i] = true;
    }
    while(!q.empty())
    {
        tuple<int,int,int> tup = q.front();
        int idx = get<0>(tup);
        int mask = get<1>(tup);
        int dist = get<2>(tup);
        q.pop();
        if(mask==(1<<n)-1){
            res = dist;
            break;
        }
        for(auto v:graph[idx]){
            int mask_v = mask|1<<v;
            if(!seen[v][mask_v]){
                q.push(tuple<int,int,int>(v,mask_v,dist+1));
                seen[v][mask_v] = true;
            }
        }
    }
    return res;
}
int main(){
    vector<vector<int>> graph{{1,2,3},{0},{0},{0}};
    int ans = shortestPathLength(graph);
    cout<<ans;
}