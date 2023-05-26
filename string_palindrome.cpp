#include <bits/stdc++.h>
using namespace std;

bool f(int i,string s){
    int n = s.length();
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]) return false;
    return f(i+1,s);
}
int main(){
    string s = "madam";
   cout<< f(0,s);
}