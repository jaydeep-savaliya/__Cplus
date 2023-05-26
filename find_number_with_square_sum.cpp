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
int main(){
    int n = 1;
    bool ans = isValid(to_string(n*n),n);
    cout<<ans;
}