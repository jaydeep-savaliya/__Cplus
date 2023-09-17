#include <bits/stdc++.h>
using namespace std;
string solve(string num,int i,int sum,string expression,int count){
    if(i==num.size()){
        if(sum==0){
            if(count>0){
                return expression;
            }
        }
        return "";
    }
    string ans = solve(num,i+1,sum+(num[i]-'0'),expression+'+',count);
    if(!ans.empty()){
        return ans;
    }
    ans = solve(num,i+1,sum-(num[i]-'0'),expression+'-',count+1);
    return ans;
}
string MathChallenge(string num){
    int n = num.size();
    string ans = solve(num,1,num[0]-'0',"",0);
    if(ans.empty()){
        return "not possible";
    }
    return ans;
}
int main(){
    string num = "35132";
    string ans = MathChallenge(num);
    cout<<ans;
}