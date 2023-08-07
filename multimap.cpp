#include <bits/stdc++.h>
using namespace std;
void counting_sort(vector<int>&arr){
    multimap<int,int> m;
    map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        if(m.find(arr[i])!=m.end()){
            int ele = m.count(arr[i]);
            m.insert({arr[i],ele+1});
        }else{
            m.insert({arr[i],1});
        }
    }
    vector<int> ans;
    for(auto x:m){
        int ele = x.first;
        int count = x.second;
        while(count--){
            ans.push_back(ele);
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> arr{2, 5, 2, 8, 1, 4, 1};
    counting_sort(arr);
    return 0;
}