#include<bits/stdc++.h>
using namespace std;
bool winnerOfGame(string colors){
    int alice = 0;
    int bob = 0;
    stack<int> s;
    for(auto x:colors){
        if(s.size()>=2){
            char first = s.top();
            s.pop();
            char second = s.top();
            s.pop();
            s.push(second);
            s.push(first);
            if(x==first && x==second){
                x=='A'?alice++:bob++;
            }else{
                s.push(x);
            }
        }else{
            s.push(x);
        }
    }
    return alice>bob;
}
int main(){
    string colors = "ABBBBBBBAAA";
    bool ans = winnerOfGame(colors);
    cout<<ans;
}