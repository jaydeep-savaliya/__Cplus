#include <bits/stdc++.h>
using namespace std;
string makeSmallestPalindrome(string s){
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            if(s[i]-'a' < s[j]-'a'){
                s[j]=s[i];
            }else{
                s[i]=s[j];
            }
        }
        i++;
        j--;
    }
    return s;
}
int main(){
    string s ="seven";
    string ans = makeSmallestPalindrome(s);
    cout<<ans;
}