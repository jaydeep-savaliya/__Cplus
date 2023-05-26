#include <bits/stdc++.h>
using namespace std;
void swp(vector<int> &ans,int i,int j){
    int temp = ans[i];
    ans[i]=ans[j];
    ans[j]=temp;
}
void check(vector<int> &ans,int idx,int count){
    if(idx==ans.size()) count++;
    for(int i=idx;i<ans.size();i++){
        swp(ans,i,idx);
        if((ans[idx]%(idx+1)==0) || ((idx+1)%ans[idx]==0)){
            check(ans,idx+1,count);
        }
        swp(ans,i,idx);
    }
}
int main(){
    int count = 0;
    int n = 3;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++) ans[i]=i+1;
    check(ans,0,count);
    cout<<count;
}