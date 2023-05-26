#include <bits/stdc++.h>
using namespace std;
vector<int> Dijtras(vector<vector<int>> adj[],int S,int V){
    set<pair<int,int>> st;
    st.insert({0,S});
    vector<int> dist(V,INT_MAX);
    dist[S]=0;
    while(!st.empty()){
        auto it = *(st.begin()); 
        int dis = it.first;
        int node = it.second;
        st.erase(it);
        for(auto it:adj[node]){
            int adjnode = it[0];
            int edgew = it[1];
            if(dis+edgew<dist[adjnode]){
                if(dist[adjnode]!=1e9){
                    st.erase({dist[adjnode],adjnode});
                }
                dist[adjnode] = dis+edgew;
                st.insert({dist[adjnode],adjnode});
            }
        }
    }
    return dist;
}
int main(){
    vector<vector<int>> adj[]{{{1, 1}, {2, 6}}, {{2, 3}, {0, 1}}, {{1, 3}, {0, 6}}};
     int V = 3;
     int S = 2;
     vector<int> ans=Dijtras(adj,S,V);
    for(auto x:ans){
        cout<<x<<" ";
    }
}   