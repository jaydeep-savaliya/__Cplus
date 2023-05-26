#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> v,vector<vector<int>> &ans,int idx){
    if(idx==v.size()){
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<v.size();i++){
        if(i!=idx && v[i]==v[idx]){
            continue;
        }
        swap(v[i],v[idx]);
        helper(v,ans,idx+1);
    }
}
vector<vector<int>> permute(vector<int> &v){
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    helper(v,ans,0);
    return ans;
}
int main(){
    vector<int> v={1,2,3};
    
   vector<vector<int>> p =  permute(v);
   for(auto x:p){
    for(auto c:x){
        cout<<c<<" ";
    }
    cout<<endl;
   }

    return 0;
}