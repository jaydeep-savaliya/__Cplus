#include <bits/stdc++.h>
using namespace std;
int maximumNumberOfStringPairs(vector<string> &words){
    int n = words.size();
    map<string,int>m;
    for(auto x:words){
        string S = x;
        reverse(S.begin(),S.end());
        if(S!=x){
            m.insert({x,1});
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(m[words[i]]!=0){
            string s=words[i];
        reverse(s.begin(),s.end());
        if(m.find(s)!=m.end()){
            if(m[s]!=0){
                m[s]=0;
                m[words[i]]=0;
                count++;
            }
        }
        }else{
            continue;
        }
    }
    return count;
}
int main(){
    vector<string> words{"cd","ac","dc","ca","zz"};
    int ans = maximumNumberOfStringPairs(words);
    cout<<ans;
}