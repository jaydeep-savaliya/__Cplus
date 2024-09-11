#include<bits/stdc++.h>
using namespace std;
int getLastMoment(int n,vector<int>&left,vector<int>&right){
    int ans = INT_MIN;
    for(auto& x:left){
        ans = max(ans,x);
    }
    for(auto& x:right){
        ans = max(ans,abs(n-x));
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n = 4;
    vector<int>left{4,3};
    vector<int>right{0,1};
    cout<<getLastMoment(n,left,right);
    return 0;
}
