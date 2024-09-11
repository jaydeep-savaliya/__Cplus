#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        string s[10000];
        int a[10000];
        map<string,long int>mp;
        long int mx = 0;
        for(int i=0;i<n;i++){
            cin>>s[i]>>a[i];
            mp[s[i]]+=a[i];
            mx = max(mx,mp[s[i]]);
        }
        map<string,long int>mp1;
        string ans;
        for(int i=0;i<n;i++){
            mp1[s[i]]+=a[i];
            if(mp1[s[i]]>=mx && mp[s[i]]==mx){
                ans = s[i];
                break;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
}