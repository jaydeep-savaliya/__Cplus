#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{2,3,1,1,4};
    int n =nums.size();
    int idx = 0;
    for(int i=n-1;i>=0;i--){
        if(nums[i]+i>=idx){
            idx=i;
        }
    }
    bool temp = false;
    if(idx==0) temp=true;
    cout<<temp;
}