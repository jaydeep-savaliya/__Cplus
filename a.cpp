#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 3;
    int i = 0;
    int j = 0; 
    int ans = INT_MIN;
    while(i<v.size() && j<v.size()){
        if(k!=0 || v[i]==1){
            if(v[i]==0){
                k--;
            }
            i++;
        }else if(k==0){
            if(v[j]==0) k++;
            j++;
        }
        ans = max(ans,i-j);
    }
    cout<<ans;
   
}