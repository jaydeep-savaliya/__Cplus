#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    int n=s.length()-1;
    int length = 0;
    while(n>0){
        if(s[--n]!=' ') length++;
         else if(length>0) return length;
    }
    return length;
}