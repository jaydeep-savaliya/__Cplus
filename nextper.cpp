#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3};
    next_permutation(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
}