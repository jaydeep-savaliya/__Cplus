#include <bits/stdc++.h>
using namespace std;
void solve(string digit,string output,int index, vector<string>& ans,string mapping[]){
        if(index>=digit.length()){
            ans.push_back(output);
            return ;
        }
        int number=digit[index]-'0';
        string value=mapping[number];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]); 
            solve(digit,output,index+1,ans,mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        if(digits.length()==0){
            return ans;
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,0,ans,mapping);
        return ans;
    }
int main(){
    string digits = "23";
    vector<string>ans = letterCombinations(digits);
    for(auto x:ans){
        cout<<x<<" ";
    }
}