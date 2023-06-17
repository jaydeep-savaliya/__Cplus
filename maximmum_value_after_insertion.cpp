#include <bits/stdc++.h>
using namespace std;
string maxValue(string s, int x) {
        if(s[0]=='-'){
            int i = 1, n = s.length();
            while(i<n && s[i]<=x+'0'){
                i++;
            }
            if(i==n){
                return s.substr(0,i)+(char)(x+'0');
            }
            return s.substr(0,i)+(char)(x+'0')+s.substr(i);
        }else{
            int i = 0, n = s.length();
            while(i<n && s[i]>=x+'0'){
                i++;
            }
            if(i==n){
                return s.substr(0,i)+(char)(x+'0');
            }
            return s.substr(0,i)+(char)(x+'0')+s.substr(i);
        }
    }
int main(){
    string s = "-13";
    int x = 2;
    string ans=maxValue(s,x);
    cout<<ans;
}