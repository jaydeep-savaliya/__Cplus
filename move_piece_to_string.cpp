#include <bits/stdc++.h>
using namespace std;
bool canChange(string start,string target){
    queue<pair<char,int>> s,t;
    for(int i=0;i<start.size();i++){
        if(start[i]!='_'){
            s.push({start[i],i});
        }
    }
    for(int i=0;i<target.size();i++){
        if(target[i]!='_'){
            t.push({target[i],i});
        }
    }
    if(s.size()!=t.size()) return false;
    while(s.size()){
        pair<char,int> sp,tp;
        sp = s.front();
        s.pop();
        tp = t.front();
        t.pop();
        if(sp.first!=tp.first) return false;
        else if(sp.first=='R' && sp.second>tp.second) return false;
        else if(sp.second =='L' && tp.second>sp.second) return false;
    }
    return true;
} 
int main(){
    string start = "R_L_";
    string target = "__LR";
    bool ans = canChange(start,target);
    cout<<ans;
}