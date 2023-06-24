#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s,string goal){
    if(s.size()!=goal.size()) return false;
    for(int i=0;i<s.size();i++){
        if(s==goal) return true;
        s= s.substr(1) + s[0];

    }
    return false;
}
int main(){
    string s = "abcde";
    string goal = "cdeab";
    bool ans = rotateString(s,goal);
    cout<<ans;
}