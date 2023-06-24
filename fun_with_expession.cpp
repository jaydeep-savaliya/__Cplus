#include <bits/stdc++.h>
using namespace std;
int calculate(string s){
    stack<int> st;
        int n=s.size();
        int curr=0;
        char op='+';
        for(int i=0; i<n; i++){
            if(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/'){
                curr*=10;
                curr+=s[i]-'0';
            }
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || i==n-1){
                if(op=='+'){
                    st.push(curr);
                }
                else if(op=='-'){
                    st.push(-1*curr);
                }
                else if(op=='*'){
                    int x=st.top();
                    st.pop();
                    st.push(x*curr);
                }
                else if(op=='/'){
                    int x=st.top();
                    st.pop();
                    st.push(x/curr);
                }
                curr=0;
                op=s[i];
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
}
int main(){
    string s = "10*20+10";
    int ans = calculate(s);
    cout<<ans; 
}