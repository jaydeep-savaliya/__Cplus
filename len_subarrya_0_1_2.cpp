#include <bits/stdc++.h>
using namespace std;
 int main(){
    vector<int> nums = {1,0,2,1,0,2};
    int n = nums.size();
    int ans = 0;
    unordered_map<string ,int> m;
    int countz = 0;
    int counto = 0;
    int countt = 0;
    int delta10 = counto-countz;
    int delta21 = countt - counto;
    string key = delta21 +"#"+ delta10;
    m.insert({key,-1});
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            countz++;
        }else if(nums[i]==1){
            counto++;
        }else{
            countt++;
        }
        delta10 = counto-countz;
        delta21 = countt - counto;
        key = delta21 +"#"+ delta10;
        if(m.find(key)!=m.end()){
            int idx = m[key];
            int length = i - idx;
            if(length>ans){
                ans = length;
            }else{
                m.insert({key,i});
            }
        }
        
    } 
    cout<<ans;
 }