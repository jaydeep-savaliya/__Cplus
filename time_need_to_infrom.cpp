#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> adj[],int idx,vector<int> &informTime){
        int ans = 0;
        for(int i=0;i<adj[idx].size();i++){
            ans = max(ans,solve(adj,adj[idx][i],informTime));
        }
        ans+=informTime[idx];
        return ans;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            if(manager[i]==-1) continue;
            adj[manager[i]].push_back(i);
        }
        int ans = solve(adj,headID,informTime);
        return ans;
    }
int main(){
    int n = 1;
    int headID = 0;
    vector<int> manager{-1};
    vector<int> informTime{0};
    int ans = numOfMinutes(n,headID,manager,informTime);
    cout<<ans;
}