#include <bits/stdc++.h>
using namespace std;
int solve(int i,int j,int n,int m,int p,vector<vector<int>> &dp,vector<int>& arr1, vector<int>& arr2){
    if(i==n) return 0;
    j = upper_bound(arr2.begin()+j,arr2.end(),p)-arr2.begin();
    if(j==m && arr1[i]<=p) return 2001;
    if(dp[i][j]!=-1) return dp[i][j];
    int take=2001;
    int notatake = 2001;
    if(j!=m){
        take = solve(i+1,j+1,n,m,arr2[j],dp,arr1,arr2)+1;
    }
    if(arr1[i]>p){
        notatake = solve(i+1,j,n,m,arr1[i],dp,arr1,arr2);
    }
    return dp[i][j] = min(take,notatake);
}
int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<vector<int>> dp(2001,vector<int>(2001,-1));
    sort(arr2.begin(),arr2.end());
    int a = solve(0,0,n,m,-1,dp,arr1,arr2);
    if(a>n) return -1;
    return a;
}
int main(){
    vector<int> arr1{1,5,3,6,7};
    vector<int> arr2{4,3,1};
    int ans = makeArrayIncreasing(arr1,arr2);
    cout<<ans;
}