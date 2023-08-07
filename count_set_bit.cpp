#include <bits/stdc++.h>
using namespace std;
vector<int> countBits(int n){
    vector<int> ans(n+1);
    ans[0] = 0;
    for(int i=1;i<=n;i++){
        ans[i] = ans[i/2] + i%2;
    }
    // for(int i=0;i<=n;i++){
    //     ans[i] = __builtin_popcount(i);
    // }
    return ans;
}
int main(){
    int n = 5;
    vector<int> ans = countBits(n);
    for(auto x:ans){
        cout<<x<<" ";
    }
}