#include <bits/stdc++.h>
using namespace std;

 bool isP(string s)
    {
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]!=s[s.size()-1-i])
            {
                return false;
            }
        }
        return true;
    }

void printS(vector<vector<string>> &ans,string s,vector<string> &a){
    if(s.size()==0){
        ans.push_back(a);
        return;
    }
    for(int i=0;i<s.size();i++){
        string pqr = s.substr(0,i+1);
        string ros = s.substr(i+1);
        if(isP(pqr)){
            a.push_back(pqr);
            printS(ans,ros,a);
            a.pop_back();
        }
    }
    
}

int main(){
    string s = "aab";
    vector<vector<string>>ans;
    vector<string>a;
    printS(ans,s,a);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<< " ";
        }cout<<endl;
    } 
}