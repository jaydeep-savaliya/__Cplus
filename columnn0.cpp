#include<bits/stdc++.h>
using namespace std;
string convertToTitle(int columnnumber){
    string ans = "";
    while(columnnumber--){
        ans.push_back(columnnumber%26 + 'A');
        columnnumber/=26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int columnnumber = 1;
    string ans = convertToTitle(columnnumber);
    cout<<ans;
}