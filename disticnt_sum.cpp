#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    int index = n/2;
    int element = 0;
    for(int i=0;i<n;i++){
        if(v[i] == index){
            element = i;
        }
    }
    cout<<element<<endl;
    swap(v[element],v[element-1]);
    
    for(auto x:v){
        cout<<x<<" ";
    }
}