#include<bits/stdc++.h>
using namespace std;
long long ksum(vector<int> &nums,int k){
    int n = nums.size();
    long long max_sum = 0;
    for(int i=0;i<n;i++){
        max_sum +=(long long)max(0,nums[i]);
        nums[i]=abs(nums[i]);
    }
    sort(nums.begin(),nums.end());
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> mean_heap;
    mean_heap.push({nums[0],0});
    vector<long long> values_to_substract={0};
    while(values_to_substract.size()<k){
        auto top = mean_heap.top();
        long long value = top.first;
        int index = top.second;
        mean_heap.pop();
        values_to_substract.push_back(value);
        if(index<n-1){
            mean_heap.push({value+nums[index+1],index+1});
            mean_heap.push({value+nums[index+1]-nums[index],index+1});
        }
    }
    return max_sum - values_to_substract[k-1];
}
int main(){
    vector<int> nums{492634335,899178915,230945927};
    int k = 2;
    long long ans = ksum(nums,k);
    cout<<ans;
}