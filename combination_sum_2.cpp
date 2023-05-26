#include <bits/stdc++.h>
using namespace std;
 void recur(int i, int t, vector<int> &v, vector<int> &temp, set<vector<int>> &ans){
      if(t == 0){
        ans.insert(temp);
        return;
      }
      for(int idx = i; idx < v.size(); idx++){
        if(idx > i and v[idx] == v[idx - 1]) continue;
        if(t - v[idx] < 0) break;
        temp.push_back(v[idx]);
        recur(idx + 1, t - v[idx], v, temp, ans);
        temp.pop_back();
      }
    }
int main(){
    vector<int> v{10,1,2,7,6,1,5};
    int t = 8;
    set<vector<int>> anst;
      vector<int> temp;
      sort(v.begin(), v.end());
      recur(0, t, v, temp, anst);
      vector<vector<int>> ans(anst.begin(), anst.end());
        for(auto x:anst){
            for(auto y:x){
                cout<<y<<" ";
            }cout<<endl;
        }
}