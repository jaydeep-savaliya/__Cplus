#include <bits/stdc++.h>
using namespace std;
const int base = 1337;
int sol(int a,int k){
    a%=base;
    int ans = 1;
    for(int i=0;i<k;i++){
        ans = (ans*a)%base;
    }
    return ans;
}
int superPow(int a,vector<int> &b){
    if(b.empty()){
        return 1;
    }
    int last = b.back();
    b.pop_back();
    return sol(superPow(a,b),10)*sol(a,last)%base;
}
int main(){
    int a = 2;
    vector<int> b{4,3,3,8,5,2};
    int ans= superPow(a,b);
    cout<<ans;
}