#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    vector<vector<int>> r(n);
    for(int i=0;i<n;i++){
        r[i].resize(i+1);
        r[i][0] = r[i][i] = 1;
        for(int j=1;j<i;j++){
            r[i][j] = r[i-1][j-1]+r[i-1][j];
        }
    }
    for(auto x:r){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}