#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "Jaydip Madhubhai Savaliy";
    set<char> Set;
    int max_len =0;
    int start = 0;
    int end = 0;
    while(start<s.length()){
        auto it = Set.find(s[start]);
        if(it==Set.end()){
            max_len = max(max_len,start-end+1);
            Set.insert(s[start]);
            start++;
        }else{
            Set.erase(s[end]);
            end++;
        }
    }
    cout<<max_len;
    return 0;
}