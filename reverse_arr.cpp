#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {99,-2,3,75};
    int k = 2;
    int n = nums.size();    
    k = k%n;
    int jump = n-k;   
    vector<int> ans;
    for(int i=n-k;i<n;i++){
        ans.push_back(nums[i]);
    }
    for(int i=0;i<jump;i++){
        ans.push_back(nums[i]);
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}