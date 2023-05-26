#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> memo;
int find(string s, string t, int i, int j){
        if(i==0){
            return j;
        }
        if(j==0){
            return i;
        }
        if(memo[i][j]!=INT_MAX) return memo[i][j];
        if(s[i-1]==t[j-1]) return memo[i][j]=find(s,t,i-1,j-1);
        return memo[i][j]=1+min(find(s,t,i-1,j-1),min(find(s,t,i-1,j),find(s,t,i,j-1)));
    }
int minDistance(string s,string t){
        memo.resize(s.size()+1, vector<int>(t.size()+1,INT_MAX));
       return find(s,t,s.size(),t.size());
}
int main(){
    string s = "geek";
    string t = "gesek";
    int ans = minDistance(s,t);
    cout<<ans;
}