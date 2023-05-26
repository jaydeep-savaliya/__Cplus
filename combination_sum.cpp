#include <bits/stdc++.h>
using namespace std;
void func(int i,int target,vector<int>& candidates,vector<vector<int>> &ans,vector<int> &v){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        if(candidates[i]<=target){
            v.push_back(candidates[i]);
            func(i,target-candidates[i],candidates,ans,v);
            v.pop_back();
        }
        func(i+1,target,candidates,ans,v);

    }
 int main(){
    vector<int> candidates{2,5,2,1,2};
    int target = 5;
    vector<vector<int>> ans;
    vector<int> v;
    func(0,target,candidates,ans,v);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }cout<<endl;
    }
 }