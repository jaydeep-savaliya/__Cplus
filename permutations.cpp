#include <bits/stdc++.h>
using namespace std;

void permutations(int i,vector<int>& v,vector<vector<int>>& ans){
    int n = v.size();
    if(i==n-1){
        ans.push_back(v);
        return;
    }
    for(int j=i;j<n;j++){
        swap(v[i],v[j]);
        permutations(i+1,v,ans);
        swap(v[i],v[j]);
    }
}
int main(){
    vector<int> v={1,2,3};
    vector<vector<int>> ans;
    permutations(0,v,ans);
    for(int i=0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
    }
}