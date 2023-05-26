#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "sadbutsad";
    string p ="sajd";
    int n = s.length();
    int m = p.length();
    vector<int> v;
    vector<int> ans;
    int index = 0;
    for(int i=0;i<n-m;i++){
        int  j= 0;
        for(int j=0;j<m;j++){
            if(s[i+j]!=p[j]){
                break;
            }
        }
        if(j==m){
            index = i;
            break;
        }else{
            
        }
    }
    cout<<index;
    
}