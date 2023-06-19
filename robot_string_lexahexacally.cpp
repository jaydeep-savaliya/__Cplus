#include <bits/stdc++.h>
using namespace std;
bool smaller(char c,vector<int> &fre){
    int n = (int)(c-'a');
    for(int i=0;i<n;i++){
        if(fre[i]>0) return true;
    }
    return false;
}
string robotWithString(string s){
    vector<int> fre(26);
    for(auto x:s){
        fre[x-'a']++;
    }
    stack<char> st;
    string ans = "";
    for(auto x:s){
        st.push(x);
        fre[x-'a']--;
        while(!st.empty()){
            char c = st.top();
            if(smaller(c,fre)) break;
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}
int main(){
    string s = "bdda";
    string ans = robotWithString(s);
    cout<<ans;
}