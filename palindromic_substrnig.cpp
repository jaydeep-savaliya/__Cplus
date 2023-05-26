#include <bits/stdc++.h>
using namespace std;
int countSubstrings(string s){
    int n = s.size();
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        dp[i][i]=1;
        if(s[i]==s[i+1]) dp[i][i+1]=1;
    }
    for(int j=2;j<n;j++){
        for(int i=0;i<j-2;i++){
            if(s[i]==s[j] && dp[i+1][j-1]==1) dp[i][j]=1;
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dp[i][j]==1) count++;
        }
    }
    return count;
}
int main(){
    string s = "abc";
    int ans = countSubstrings(s);
    cout<<ans;
}