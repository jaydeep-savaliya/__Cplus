#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aabbaa";
    int length = 0;
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(j>=i){
        if(s[i]!=s[j]){
            break;
        }else length++;
        i++;
        j--;
    }
    cout<<length;
}