#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums1{0};
    vector<int> nums2{0};
    vector<int> nums3{0};
    vector<int> nums4{0};
    int count = 0;
    unordered_map<int,int> m;
    for(auto x:nums1){
        for(auto y:nums2){
            m[x+y]++;
        }
    }
    for(auto x:nums3){
        for(auto y:nums4){
            if(m.find(0-x-y)!=m.end()){
                count+=m[0-x-y];
            }
        }
    }
    cout<<count;
}