#include <bits/stdc++.h>
using namespace std;
int x = 1005;
vector<vector<int>>dp(x,vector<int>(x,-1));
int helper(string &s,int start,int end){
    if(start>end) return 0;
    if(start==end) return 1;
    if(dp[start][end]!=-1) return dp[start][end];
    if(s[start]==s[end]) return dp[start][end] = 2+helper(s,start+1,end-1);
    else return dp[start][end] = max(helper(s,start+1,end),helper(s,start,end-1));
}
int longestPalindromeSubseq(string s){
    int n = s.size();
    return helper(s,0,n-1);
}
int main(){
    string s= "cbbd";
    int ans = longestPalindromeSubseq(s);
    cout<<ans;
}