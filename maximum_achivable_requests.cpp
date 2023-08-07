#include <bits/stdc++.h>
using namespace std;
int ans = 0;
    void solve(int start,vector<vector<int>>& requests,vector<int> &indegree,int n,int count){
        if(start==requests.size()){
            for(int i=0;i<n;i++){
                if(indegree[i]!=0) return ;
            }
            ans = max(ans,count);
            return;
        }
        // take
        indegree[requests[start][0]]--;
        indegree[requests[start][1]]++;
        solve(start+1,requests,indegree,n,count+1);
        // not take
        indegree[requests[start][0]]++;
        indegree[requests[start][1]]--;
        solve(start+1,requests,indegree,n,count);
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> indegree(n,0);
        solve(0,requests,indegree,n,0);
        return ans;
    }
int main(){
    vector<vector<int>> requests{{0,1},{1,0},{0,1},{1,2},{2,0},{3,4}};
    int n = requests.size();
    int ans = maximumRequests(n,requests);
    cout<<ans;
}