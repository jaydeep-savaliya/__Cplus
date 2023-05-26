#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> barcodes{1,1,1,1,2,2,3,3};
    map<int,int> m;
    for(auto it:barcodes){
        m[it]++;
    }
    priority_queue<pair<int,int>> pq;
    for(auto it:m){
        pq.push({it.second,it.first});
    }
    vector<int> ans;
    while(pq.top().first>0){
        pair<int,int> p=pq.top();
        pq.pop();
        ans.push_back(p.second);
        p.first--;
        pair<int,int> q=pq.top();
        pq.pop();
        if(q.first>0){
            ans.push_back(q.second);
            q.first--;
        }
        pq.push(p);
        pq.push(q);
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}