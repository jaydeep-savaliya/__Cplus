#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="()";
    stack<char> st;
    bool flag = false;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }else{
            if(!st.empty()){
                char top = st.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' &&top == '[')) {
                    st.pop();
                }else{
                    flag =false;
                }
            }
            else{
                flag= false;
            }
        }
    }
    if(st.empty()){
        flag= true;
    }
    cout<<flag;
}