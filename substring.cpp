#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int div = n/2;
    string s1 = s.substr(0,div);
    string s2 = s.substr(div,n);
   if(s1==s2){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }

}