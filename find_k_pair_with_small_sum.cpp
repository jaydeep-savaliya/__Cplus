#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> kSmallestPairs(vector<int> &nums1,vector<int> &nums2,int k){
    int n = nums1.size();
    int m = nums2.size();
    priority_queue<pair<int,pair<int,int>>> pq;
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum = nums1[i]+nums2[j];
            if(pq.size()<k){
                pq.push({sum,{nums1[i],nums2[j]}});
            }else if(sum<pq.top().first){
                pq.pop();
                pq.push({sum,{nums1[i],nums2[j]}});
            }else break;
        }
    }
    while(!pq.empty()){
        ans.push_back({pq.top().second.first,pq.top().second.second});
        pq.pop();
    }
    return ans;
}
int main(){
    vector<int>nums1{1,1,2};
    vector<int>nums2{1,2,3};
    int k = 2;
    vector<vector<int>> ans = kSmallestPairs(nums1,nums2,k);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }cout<<endl;
    }
}