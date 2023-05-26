#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat{{0,0,0},{0,1,1}};
    int n = mat.size();
    int m = mat[0].size();
    vector<pair<int,int>> ans;
    int max_one = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                count++;
            }
        }
        if(max_one<count){
            ans.clear();
            ans.push_back({i,count});
        }
    }
    cout<<ans[0].first<<" "<<ans[0].second;
    
}   