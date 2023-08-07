#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int helper(int n,vector<vector<int>> &dp,vector<int> &locations,int current,int finish,int fuel){
    if(fuel<0) return 0;
    if(dp[current][fuel]!=-1) return dp[current][fuel];
    int ans = 0;
    if(current==finish) ans++;
    for(int next=0;next<n;next++){
        if(next!=current){
            ans = (ans%mod + helper(locations.size(),dp,locations,next,finish,fuel - abs(locations[current]-locations[next])%mod))%mod;
        }
    }
    return dp[current][fuel] = ans;
}
int countRoutes(vector<int> &locations,int start,int finish,int fuel){
    vector<vector<int>> dp(locations.size(),vector<int>(fuel+1,-1));
    return helper(locations.size(),dp,locations,start,finish,fuel);
}
int main(){
    vector<int> locations{4,3,1};
    int start = 1;
    int finish = 0;
    int fuel = 6;
    int ans= countRoutes(locations,start,finish,fuel);
    cout<<ans;
}
