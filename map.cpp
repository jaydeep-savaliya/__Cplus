#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    int a=0;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    for(auto x:m){
        if(x.second>a){
            a = x.second;
        }
    }
    cout<<n-a;
}