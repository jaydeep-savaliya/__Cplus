#include<bits/stdc++.h>
using namespace std;
int nthUglyNumber(int n){
    vector<int> dp(n);
    dp[0] = 1;
    int x=0,y=0,z=0;
    for(int i=1;i<n;i++){
        dp[i] = min({dp[x]*2,dp[y]*3,dp[z]*5});
        if(dp[i]==2*dp[x])x++;
        if(dp[i]==3*dp[y])y++;
        if(dp[i]==5*dp[z])z++;
    }
    for(auto x:dp){
        cout<<x<<" ";
    }cout<<endl;
    return dp[n-1];
}
int main(){
    int n = 10;
    int ans = nthUglyNumber(n);
    cout<<ans;
}