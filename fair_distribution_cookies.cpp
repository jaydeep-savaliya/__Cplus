#include <bits/stdc++.h>
using namespace std;
void solve(int start,vector<int> &cookies,vector<int> &temp,int k,int &ans){
    int n=cookies.size();
    if(start==n){
        int maxi = INT_MIN;
        for(int i=0;i<k;i++){
            maxi = max(temp[i],maxi);
        }
        ans = min(maxi,ans);
        return;
    }
    for(int i=0;i<k;i++){
        temp[i]+=cookies[start];
        solve(start+1,cookies,temp,k,ans);
        temp[i]-=cookies[start];
    }
}
int distributeCookies(vector<int> &cookies,int k){
    int n = cookies.size();
    vector<int> temp(k,0);
    int ans = INT_MAX;
    solve(0,cookies,temp,k,ans);
    return ans;
}
int main(){
    vector<int> cookies{8,15,10,20,8};
    int k = 2;
    int ans = distributeCookies(cookies,k);
    cout<<ans;
}