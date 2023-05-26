#include <bits/stdc++.h>
using namespace std;
int main(){
    string s= "ahbgdc";
    string t = "ab";
    int n = s.length();
    int m = t.size();
    int j = 0;
    for(int i=0;i<n;i++){
        if(s[i]==t[j]){
            j++;
        }
    }
    bool flag = false;
    if(j==m){
        flag = true;
    }
    cout<<flag;
}