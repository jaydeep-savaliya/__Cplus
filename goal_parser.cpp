#include <bits/stdc++.h>
using namespace std;
string interpret(string command){
    int n = command.size();
    string ans;
    for(int i=0;i<n;i++){
        if(command[i]=='G'){
            ans+='G';
        }else if(command[i]=='(' && i+1<n){
            if(command[i+1]==')'){
                ans+='o';
                ++i;
            }else if(i+3<n && command.substr(i,4)=="(al)"){
            ans+="al";
            i+=3;
        }
        }
    }
    return ans;
}
int main(){
    string command =  "G()(al)";
    string ans = interpret(command);
    cout<<ans;
}