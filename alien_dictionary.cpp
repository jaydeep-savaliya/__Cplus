#include <bits/stdc++.h>
using namespace std;
vector<int> toposort(int V,vector<int> adj[]){
            int indegree[V]={0};
            for(int i=0;i<V;i++){
                for(auto x:adj[i]){
                    indegree[x]++;
                }
            }
            priority_queue<int> q;
            for(int i=0;i<V;i++){
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            vector<int> topo;
            while(!q.empty()){
                int u = q.top();
                q.pop();
                topo.push_back(u);
                for(auto x:adj[u]){
                    if(--indegree[x]==0){
                        q.push(x);
                    }
                }
            }
            return topo;
}
string findOrder(string dict[], int N, int K){
    vector<int> adj[K];
       for(int i=0;i<N-1;i++){
           string s1 = dict[i];
           string s2 = dict[i+1];
           int len = min(s1.size(),s2.size());
           for(int j=0;j<len;j++){
               if(s1[j]!=s2[j]){
                   adj[s1[j]-'a'].push_back(s2[j]-'a');
                   break;
               }
           }
       }
       vector<int> topo=toposort(K,adj);
       string ans="";
       for(auto x:topo){
           ans = ans+char(x+'a');
       }
       return ans;
}
int main(){
    int N=5;
    string dict[N]={"baa","abcd","abca","cab","cad"};
    int k = 4;
    cout<<findOrder(dict,N,k);
}