#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,2,3};
    vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<(1<<n);i++)
        {   
            vector<int>v;
            for(int j=0;j<n;j++)
            {   
                if((1<<j)&i){ v.push_back(nums[j]); }
            }
            ans.push_back(v);
        }
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}