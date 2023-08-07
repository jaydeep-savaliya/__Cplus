#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>> generate(long long n){
    vector<vector<long long>> ans(n);
    for(int i=0;i<n;i++){
        ans[i].resize(i+1);
        ans[i][0] = ans[i][i] = 1;
        for(int j=1;j<i;j++){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    return ans;
}
int main(){
    long long n = 5;
    vector<vector<long long>> ans = generate(n);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
