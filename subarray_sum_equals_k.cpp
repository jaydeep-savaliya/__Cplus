#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,3,-1,0,7,-2,5};
    unordered_map<int,int> m;
    int k = 5;
    m.insert({0,1});
    int sum = 0;
    int count = 0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        auto it = m.find(sum-k);
        if(it!=m.end()){
            count+=it->second;
        }
        it = m.find(sum);
        if(it!=m.end()){
            it->second++;
        }else{
            m.insert({sum,1});
        }
    }
    cout<<count;
}