#include <bits/stdc++.h>
using namespace std;
bool isplaindrome(string &s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string s=  "jaj";
    int n = s.length();
    int max_len = 0;
    int start_idx = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isplaindrome(s,i,j)){
                if(j-i+1>max_len){
                    max_len = j-i+1;
                    start_idx = i;
                }
            }
        }
    }
    cout<<s.substr(start_idx,max_len);
}