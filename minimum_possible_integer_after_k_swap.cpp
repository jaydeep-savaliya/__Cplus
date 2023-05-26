#include <bits/stdc++.h>
using namespace std;
vector<int> v;
string minInteger(string num,int k){
    if(k<=0) return num;
    int n = num.size();
    if(k>=n*(n+1)/2){
        sort(num.begin(),num.end());
        return num;
    }
    for(int i=0;i<10;i++){
        int idx = num.find(to_string(i));
        v.push_back(idx);
        if(idx>=0 && idx<=k){
            return num[idx]+minInteger(num.substr(0,idx)+num.substr(idx+1),k-idx);
        }
    }
    return num;
}
int main(){
    string num = "4321";
    int k = 4;
    string ans = minInteger(num,k);
    cout<<ans;
}