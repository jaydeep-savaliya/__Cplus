#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    string s1 = "jaydip";
    string s2 = "5";
    
    for(int i=0;i<10;i++){
        s.insert("col"+ i);
    }
    for(auto x:s){
        cout<<x<<" ";
    }cout<<endl;
}