#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans(m);
    for(int i=0;i<m;i++){
        ans[i]=matrix[i][0];
    }
    int end = upper_bound(ans.begin(),ans.end(),target)-ans.begin()-1;
    if(end<0) return false;
    return binary_search(matrix[end].begin(),matrix[end].end(),target);
}
int main(){
    vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    bool ans = searchMatrix(matrix,target);
    cout<<ans;
}
