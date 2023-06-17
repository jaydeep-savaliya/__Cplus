#include <bits/stdc++.h>
using namespace std;
int longestSemiRepetitiveSubstring(string s){
    int n = s.size();
    int left = 0;
    int ans = 1;
    int count = 0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
        while(count>1){
            if(s[left]==s[left+1]){
                count--;
            }
            left++;
        }
        ans = max(ans,i-left+1);
    }
    return ans;
}
int main(){
    string s = "11111111";
    int ans = longestSemiRepetitiveSubstring(s);
    cout<<ans;
}