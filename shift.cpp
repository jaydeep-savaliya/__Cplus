#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> shifts{3,5,9};
    char c = 'c';
    cout<< char(((c-'a')+9)+'a')<<endl;
    string s = "abc";
    int shift = 0;
    for(int i=shifts.size()-1;i>=0;i--){
        s[i] = ((s[i]-'a')+(shift+shifts[i])%26)%26 + 'a';
        shift+=shifts[i];
    }
    cout<<s;
}