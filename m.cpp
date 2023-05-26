#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    int maximum = 0;
    sort(v.begin(),v.end());
    maximum = v[n-x];
    cout<<maximum - 1;
    return 0;
}
