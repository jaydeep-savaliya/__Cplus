#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,2,3,4};
    int n = nums.size();
    vector<int> ans(n);
    ans[0]=1;
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    for(auto c:ans){
        cout<<c<<" ";
    }cout<<endl;
    int ref = 1;
    for(int i=n-1;i>=0;i--){ 
        ans[i]*=ref;
        ref*=nums[i];
    }
    for(auto x:ans){
        cout<<x<<" ";
    }

}