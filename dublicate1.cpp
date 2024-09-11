#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &v){
    int n = v.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        int x = abs(v[i]);
        x--;
        if(v[x]<0) ans.push_back(x+1);
        else v[x]*=-1;
    }
    return ans;
}
int main(){
    vector<int> v{1,2,1,3,4,3};
    vector<int> ans = findDuplicates(v);
    for(auto x:ans){
        cout<<x<<" ";
    }
}