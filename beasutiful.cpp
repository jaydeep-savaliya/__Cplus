#include <bits/stdc++.h>
using namespace std;
int f(int idx,vector<int> &ans){
    if(idx==0) return 1;
    int sum = 0;    
    for(int i=1;i<ans.size();i++){
        if(ans[i]==0 && (idx%i==0 || i%idx==0)){
            ans[i]=i;
            sum+=f(idx-1,ans);
            ans[i]=0;
        }
    }
    return sum;
}
int main(){
    int n = 5;
    vector<int> ans(n+1);
    cout<<f(n,ans);
}