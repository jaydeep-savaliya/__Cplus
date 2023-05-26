#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums {0,1};
    unordered_map<int,int> m;
    int n = nums.size();
    m.insert({0,-1});
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            nums[i]=-1;
        }else{
            nums[i]=1;
        }
    }
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(m.find(sum)!=m.end()){
            ans = max(ans,i-m[sum]);
        }else{
            m.insert({sum,i});
        }
    }
    cout<<ans;
}