#include <bits/stdc++.h>
using namespace std;
int lcs(string word1,string word2){
    int n = word1.size();
    int m = word2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1));maxim
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else if(word1[i-1]==word2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    return dp[n][m];
}
int findOperationForString(string word1,string word2){
    int n = word1.size();
    int m = word2.size();
    int a = lcs(word1,word2);
    return (n-a)+(m-a);
}
int main(){
    string word1 = "leetcode";
    string word2 = "etco";
    int ans = findOperationForString(word1,word2);
    cout<<ans;
}