#include <bits/stdc++.h>
using namespace std;
bool check(string t){
    if(t == "/" || t == "+" || t == "*" || t == "-"){
        return true;
    }
    return false;
}
int evalRPN(vector<string> &A){
    stack<string> st;
    for(int i=A.size()-1;i>=0;i--){
        if(check(A[i])){
            st.push(A[i]);
        }else{
            if(st.empty()){
                return stoi(A[i]);
            }
        if(check(st.top())){
            st.push(A[i]);
        }else{
            st.push(A[i]);
            while(!check(st.top())){
                int a = stoi(st.top());
                st.pop();
                if(st.empty() || check(st.top())){
                    st.push(to_string(a));
                    break;
                }
                int b = stoi(st.top());
                st.pop();
                string op = st.top();
                st.pop();
                int p;
                if(op == "*"){
                    p = a*b;
                }
                else if(op == "-"){
                    p = a-b;
                }
                else if(op == "+"){
                    p = a+b;
                }
                else if(op == "/"){
                    p = a/b;
                }
                st.push(to_string(p));
            }
        }
        }
    }
    return stoi(st.top());
}
int main(){
    vector<string> A{"2", "1", "+", "3", "*"};
    int ans = evalRPN(A);
    cout<<ans;
}