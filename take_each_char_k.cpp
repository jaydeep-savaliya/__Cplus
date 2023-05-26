#include <bits/stdc++.h>
using namespace std;
bool valid(vector<int> &ans,int k){
    if(ans[0]<k || ans[1]<k || ans[2]<k) return false;
    return true;
}
int takeCharacters(string s,int k){
    vector<int> ans(3);
    for(int i=0;i<s.size();i++){
        ans[s[i]-'a']++;
    }
    if(ans[0]<k || ans[1]<k || ans[2]<k) return -1;
    int i =s.size()-1;
    int j = s.size()-1;
    int max_len = INT_MAX;
    while(i>=0 && j>=0){
        ans[s[i]-'a']--;
        i--;
        while(!valid(ans,k) && j>=0){
            ans[s[j]-'a']++;
            j--;
        }
        int sum = ans[0]+ans[1]+ans[2];
        max_len = min(max_len,sum);
    }
    return max_len;
}
int main(){
    string s = "aabaaaacaabc";
    int k = 2;
    int ans = takeCharacters(s,k);
    cout<<ans;
}