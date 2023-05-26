#include <bits/stdc++.h>
using namespace std;
int main(){
    int colume = 2;
    string ans;
    while(colume--){
        ans.push_back(colume%26 + 'A');
        colume /=26;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}