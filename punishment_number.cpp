#include <bits/stdc++.h>
using namespace std;
bool isValid(string nums,int remsum){
    if(remsum<0) return false;
    if(nums.empty() && remsum==0) return true;
    bool ans = false;
    for(int i=0;i<nums.size();i++){
        string ref = nums.substr(0,i+1);
        int val = stoi(ref);
        ans |=isValid(nums.substr(i+1),remsum-val);
    }
    return ans;
}
int punishmentnum(int n){
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(isValid(to_string(i*i),i)){
            ans+=(i*i);
        }
    }
    return ans;
}
int main(){
    int n = 36;
    int ans = punishmentnum(n);
    cout<<ans;
}