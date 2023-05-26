#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> dominoes{{1,2},{2,1},{1,1},{1,2},{5,6}};
    int l = 0;
    int h = 0;
    map<int,int> m;
    int ans = 0;
    for(auto x:dominoes){
        l = min(x[0],x[1]);
        h = max(x[0],x[1]);
        int num = l*10 + h;
        if(m.find(num) !=m.end()){
            ans+=m[num];
            m[num]++;
        }else{
            m.insert({num,1});
        }
    }
    cout<<ans;
}