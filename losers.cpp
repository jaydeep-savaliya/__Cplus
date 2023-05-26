#include <bits/stdc++.h>
using namespace std;
vector<int> circularGameLosers(int n,int k){
   set<int> vis;
   vis.insert(0);
   int round = 1;
   int curr = 0;
   while(true){
    curr = curr+round*k;
    curr%=n;
    if(vis.count(curr)){
        break;
    }
    vis.insert(curr);
    round++;
   }
   vector<int> ans;
   for(int i=0;i<n;i++){
        if(vis.count(i)){
            continue;
        }
        ans.push_back(i+1);
    }
   return ans;
}
int main(){
    int n = 3;
    int k = 1;
    vector<int> ans=circularGameLosers(n,k);
    for(auto x:ans){
        cout<<x<<" ";
    }
}