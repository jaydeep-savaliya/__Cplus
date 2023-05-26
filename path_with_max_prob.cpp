#include <bits/stdc++.h>
using namespace std;
double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end){
    vector<pair<int,double>> adj[n];
    for(int i=0; i<edges.size(); i++) {
        adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
        adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
    }    
    priority_queue<pair<double,int>> pq;
    pq.push({1,start});
    vector<double> probi(n,0);
    while(!pq.empty()){
        double prob = pq.top().first;
        int node= pq.top().second;
        pq.pop();
        if(node==end) return prob;
        for(auto it:adj[node]){
            if(prob*it.second > probi[it.first]){
                probi[it.first] = prob*it.second;
                pq.push({prob*it.second,it.first});
            }
        }
    }
    return 0;
}
int main(){
    int n = 3;
    vector<vector<int>> edges{{0,1},{1,2},{0,2}};
    vector<double> succProb{0.5,0.5,0.2};
    int start = 0;
    int end = 2;
    double ans = maxProbability(n,edges,succProb,start,end);
    cout<<ans;
}