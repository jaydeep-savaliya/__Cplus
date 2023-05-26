#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{2,3,0,1,4};
    int n=nums.size();
    int curr = 0;
    int idx = 0;
    int jump = 0;
    for(int i=0;i<n-1;i++){
        curr = max(curr,nums[i]+i);
        if(i==idx){
            idx=curr;
            jump++;
        }
    }
    cout<<jump;
}