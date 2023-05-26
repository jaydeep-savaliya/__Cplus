#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> m;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}