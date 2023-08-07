#include <bits/stdc++.h>
using namespace std;
vector<int> sieveOfEratosthenes(int n){
    vector<bool> check(n+1,true);
    for(int p=2;p<=n;p++){
        if(check[p]){
            for(int i=p*p;i<=n;i+=p){
                check[i] = false;
            }
        }
    }
    vector<int> ans;
    for(int i=2;i<=n;i++){
        if(check[i]){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    int n = 10;
    vector<int> ans = sieveOfEratosthenes(n);
    for(auto x:ans){
        cout<<x<<" ";
    }
}