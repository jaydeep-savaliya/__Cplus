#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string> &tokens){
    unordered_set<string> symbols = {"+","-","*","/"};
        stack<long> st;
        for(int i=0;i<tokens.size();i++){
            if(symbols.find(tokens[i])==symbols.end()){
                st.push(stol(tokens[i]));
            }
            else{
                long long temp=st.top();st.pop();
                long long temp2=st.top();st.pop();
                if(tokens[i]=="+") st.push(temp2+temp);
                else if(tokens[i]=="-") st.push(temp2-temp);
                else if(tokens[i]=="*") st.push(temp2*temp);
                else st.push(temp2/temp);
            }
        }
        return (int)st.top();
}
int main(){
    vector<string> A{"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    int ans = evalRPN(A);
    cout<<ans;
}