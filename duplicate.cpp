#include <bits/stdc++.h>
using namespace std;

bool duplicate(vector<int> v){
    int n =v.size();
    int x = v[0];
    for(int i=1;i<n;i++){
        if(x==v[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<duplicate(v);
    return 0;
}