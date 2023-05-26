#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "aabbabababbbaabb";
    unordered_set<string> s ={"ab","baa","aa","cd","a"};
    bool flag = false;
    
    for(auto x:s){
        if(s1.find(x) !=string ::npos){
            flag = true;
        }else{
            flag = false;
        }
        cout<<flag<<endl;
    }
    

}