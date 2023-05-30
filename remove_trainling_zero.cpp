#include <bits/stdc++.h>
using namespace std;
string removeTrailingZeros(string num){
    int i = num.size()-1;
    while(i>=0){
        if(num[i]=='0'){
            num.pop_back();
            i--;
        }else{
            break;
        }
    }
    return num;
}
int main(){
    string num = "1720865079269529096765710007822459000000";
    string ans = removeTrailingZeros(num);
    cout<<ans;
}