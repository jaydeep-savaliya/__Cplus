#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "4530001";
    int n = s.size();
    for(int i=0;i<n-1;i++){
        int a = s[i]-'0';
        int b = s[i+1]-'0';
        if(a%2==b%2 && a>b){
            swap(s[i],s[i+1]);
            break;
        }
    }
    cout<<s;
}