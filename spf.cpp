#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> spf(1024 ,0);
    int n = 1024 ;
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    set<int> ans;
    while(n!=1){
        ans.insert(spf[n]);
        n=n/spf[n];
    }
    for(auto x:ans){
        cout<<x<<" ";
    }

}