#include <bits/stdc++.h>
using namespace std;
int rev(int n){
    int res = 0;
    while(n){
        res=res*10 + n%10;
        n/=10;
    }
    return res;
}
int main(){
    vector<int> nums{42,11,1,97};
    int n = nums.size();
    unordered_map<int,int> m;
    int M = 1e9 +7;
    int res = 0;
    for(int i=n-1;i>=0;i--){
        int diff = nums[i]-rev(nums[i]);
        if(m.find(diff)!=m.end()){
            res=(res+m[diff])%M;
        }
        m[diff]++;
    }
    cout<<res;
}