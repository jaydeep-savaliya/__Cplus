#include <bits/stdc++.h>
using namespace std;
int main(){
     vector<int> nums{23,2,4,6,7};
     int n = nums.size();
     int k =6;
     bool temp = false;
     if(n==1){
        temp = false;
        
     }
     if(k==1){
        temp=true;
        
     }
     unordered_map<int,int> m;
     int mod = nums[0]%k;
        m[mod]=0;
        for(int i=1;i<n;i++){
            mod = (mod+nums[i])%k;
            if(mod==0 || (m.find(mod)!=m.end() && m[mod]!=i-1)){
                temp = true;
            }else{
                m.insert({mod,i});
            }
        }
        cout<<temp;
}