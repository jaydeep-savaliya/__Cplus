#include <bits/stdc++.h>
using namespace std;
long long distinctNames(vector<string> &ideas){
    int n = ideas.size();
    unordered_set<string> suffix[26];
    for(auto &x:ideas){
        suffix[x[0]-'a'].insert(x.substr(1));
    }
    long long ans = 0;
    for(int i=0;i<25;i++){
        for(int j=i+1;j<26;j++){
            int count = 0;
            for(auto &x:suffix[i]){
                if(suffix[j].count(x)){
                    count++;
                }
            }
            ans += (suffix[i].size()-count) * (suffix[j].size()-count);
        }
    }
    return ans*2;
}
int main(){
    vector<string> ideas{"coffee","donuts","time","toffee"};
    long long ans = distinctNames(ideas);
    cout<<ans;
}