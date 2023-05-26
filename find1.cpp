#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,1,1,1,2,2,2,2,2,2,2};
    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    vector<int> ans;

    unordered_map<int,int> ::iterator it=m.begin();
    for(auto it:m){
        if(it.second>v.size()/2){
            ans.push_back(it.first);
        }
    }
    for(auto x:ans){
        cout<<x;
    }
}