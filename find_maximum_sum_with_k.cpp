#include <bits/stdc++.h>
using namespace std;
vector<int> maxSubsequence(vector<int>& nums,int k){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(int i=0;i<nums.size();i++){
        pq.push({nums[i],i});
        if(pq.size()>k){
            pq.pop();
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> temp;
    while(!pq.empty()){
        temp.push({pq.top().second,pq.top().first});
        pq.pop();
    }
    vector<int> ans;
    while(!temp.empty()){
        ans.push_back(temp.top().second);
        temp.pop();
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> nums{-1,-2,3,4};
    int k = 3;
    vector<int> ans = maxSubsequence(nums,k);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}
