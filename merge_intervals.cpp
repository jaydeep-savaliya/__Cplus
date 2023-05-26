#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
    int n = intervals.size();
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    vector<int> temp=intervals[0];
    for(auto it:intervals){
        if(it[0]<=temp[1]){
            temp[1]=max(it[1],temp[1]);
        }else{
            ans.push_back(temp);
            temp=it;
        }
    }
    ans.push_back(temp);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
    }

    return 0;
}