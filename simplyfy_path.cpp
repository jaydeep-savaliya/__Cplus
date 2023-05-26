#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "jaydip/deep/../jaydip";
    int n = s.size();
    stack<string> st;
    string ans;
    for(int i=0;i<n;i++){
        if(s[i]=='/') continue;
        string temp;
        while(i<n && s[i]!='/'){
            temp+=s[i];
            i++;
        }
        if(temp ==".") continue;
        if(temp =="..") {
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            st.push(temp);
        }
    }
        while(!st.empty()){
        ans = "/"+st.top()+ans;
        st.pop();
        }
    
    cout<<ans;
}