#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="goohoo";
    cout<<s.length()<<endl;
    // cin>>s;
    int fre[256]={0};
    for(int i=0;i<s.length();i++){
        fre[s[i]]++;
    }

    int value = 0;

    int flag = 0;
    for(int i=0;i<256;i++){
        if(fre[i]>1){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout<<s.length()-2;
    }else{
        cout<<-1;
    }
}