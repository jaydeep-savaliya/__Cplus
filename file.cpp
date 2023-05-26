#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "/home//foo//..//..//jaydip";
    stack<string> st;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='/'){
            continue;
        }
        string ref;
        while(i<s.size() && s[i]!='/'){
            ref +=s[i];
            i++;
        }
        if(ref=="."){
            continue;
        }
        else if(ref==".."){
            if(!st.empty()){
                st.pop();
            }
            
        }else{
                st.push(ref);
            }
    }
    while(!st.empty()){
        ans="/"+st.top()+ans;
        st.pop();
    }
    if(ans.size()==0){
        cout<<"/"<<endl;
    }
    cout<<ans;
}