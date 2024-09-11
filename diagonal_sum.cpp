#include<bits/stdc++.h>
using namespace std;
int diagonalSum(vector<vector<int>>& mat){
    int n = mat.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=mat[i][i];
        ans+=mat[n-i-1][i];
    }
    if(n%2!=0) ans-=mat[n/2][n/2];
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> mat{{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalSum(mat);
    return 0;
}
