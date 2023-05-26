#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,5,-5,5,5,5,-8 };
    // for(auto &x:v){
    //     cin>>v[x];
    // }
    int sum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(max_sum<sum){
            max_sum = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    cout<<max_sum;
    return 0;
}