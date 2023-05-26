#include<bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars){
    int count = 1;
    int j = 0;
    if(chars.size()==1) return 1;
    for(int i=1;i<=chars.size();i++){
        count = 1;
        while(i<chars.size() && chars[i]==chars[i-1]){
            count++;
            i++;
        }
        chars[j++] = chars[i-1];
        if(count>1){
            string c = to_string(count);
            for(auto x:c){
                chars[j++] = (char)x;
            }
        }
    }
    return j;
}
int main(){
    vector<char> chars{'a','b','b','b','b','b','b','b','b','b','b','b','b','b','b'};
    int ans = compress(chars);
    cout<<ans;
}