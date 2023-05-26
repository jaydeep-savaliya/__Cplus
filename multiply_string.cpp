#include <bits/stdc++.h>
using namespace std;
int main(){
    string n1 = "10";
    string n2 = "0";
    int n = n1.size();
    int m = n2.size();
    vector<int> num(n+m,0);
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            num[i+j+1]+=(n1[i]-'0')*(n2[j]-'0');
            num[i+j]+=num[i+j+1]/10;
            num[i+j+1]%=10;

        }
    }
    int i = 0;
    while(i<num.size() && num[i]==0) ++i;
    string res = "";
    
    if(n1=="0" || n2=="0") {
        res = "0";
    }else{
        while(i<num.size()) res.push_back(num[i++]+'0');
    }
    cout<<res;
}