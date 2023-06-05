#include <bits/stdc++.h>
using namespace std;
int calculate(string s) {
        int value = 0;
        int res = 0;
        int sign = 1;
        stack<int> st;
        stack<int> sta;
        for(char c:s){
            if(c>='0' && c<='9'){
                value = value*10 + (c-'0');
            }
            else if(c=='+'){
                res +=sign*value;
                value = 0;
                sign = 1;
            }else if(c=='-'){
                res+=sign*value;
                value = 0;
                sign = -1;
            }
            else if(c=='('){
                st.push(res);
                sta.push(sign);
                res = 0;
                sign = 1;
            }else if(c==')'){
                res +=sign*value;
                res*=sta.top();
                sta.pop();
                res+=st.top();
                st.pop();
                value = 0;
            }
        }
        return res + sign*value;
    }
int main(){
    string s = "(1+(4+5+2)-3)+(6+8)";
    int ans = calculate(s);
    cout<<ans;
}