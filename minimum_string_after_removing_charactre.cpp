#include<bits/stdc++.h>
using namespace std;

int minLength(string s){
    int n = s.size();
    stack<char> st;
    map<char,char> m;
    m.insert({'B','A'});
    m.insert({'D','C'});
    for(int i=0;i<n;i++){
        char ch = s[i];
        if(m.find(ch)!=m.end()){
            if(!st.empty() && st.top()==m[ch]){
                st.pop();
                continue;
            }
        }
        st.push(ch);
    }
    return st.size();
}
int main(){
    string s = "ABFCACDB";
    int ans = minLength(s);
    cout<<ans;
}