#include <bits/stdc++.h>
using namespace std;
long long minimumCost(string s){
    long long ans = 0;
    int n = s.size();
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            ans+=min(i,n-i);
        }
    }
    return ans;
}
int main(){
    string s = "0011";
    long long ans = minimumCost(s);
    cout<<ans;
}