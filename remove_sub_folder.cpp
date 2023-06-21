#include <bits/stdc++.h>
using namespace std;
vector<string> removeSubfolders(vector<string> &folder){
    sort(folder.begin(),folder.end());
    set<string> st;
    vector<string> ans;
    for(int i=0;i<folder.size();i++){
        bool flag = true;
        string t="";
        for(int j=0;j<folder[i].size();j++){
            if(folder[i][j]=='/'){
                if(st.find(t)!=st.end()){
                    flag = false;
                    break;
                }
            }
            t+=folder[i][j];
        }
        if(flag){
            st.insert(t);
        }
    }
    for(auto x:st){
        ans.push_back(x);
    }
    return ans;
}
int main(){
    vector<string> folder{"/a","/a/b","/c/d","/c/d/e","/c/f"};
    vector<string> ans=removeSubfolders(folder);
    for(auto x:ans){
        cout<<x<<" ";
    }
}