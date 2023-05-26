#include <bits/stdc++.h>
using namespace std;
class solution{
    private:
        bool DFS(int start,int vis[],int pathvis[],vector<int> adj[]){
            vis[start] = 1;
            pathvis[start]=1;
            for(auto x:adj[start]){
                if(!vis[x]){
                    if(DFS(x,vis,pathvis,adj)==true) return true;
                }else if (pathvis[x]==true) return true;
            }
            pathvis[start]=0;
            return false;
        }
    public:
        bool isCyclic(int V,vector<int> adj[]){
            int vis[V]={0};
            int pathvis[V]={0};
            for(int i=0;i<V;i++){
                if(!vis[i]){
                    if(DFS(i,vis,pathvis,adj)==true) return true;
                }
            }
            return false;
        }
};
int main(){
    vector<int> adj[6] = {{}, {2}, {3}, {4, 5}, {2}, {}};
	int V = 6;
    solution obj;
	bool ans = obj.isCyclic(V, adj);
	if (ans) cout << "True";
	else cout << "Flase";
	cout << endl;
	return 0;
}