#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> v){
    int n = v.size();
    int sum = ((n+1)*(n+2))/2;
    for(int i=0;i<n;i++)
        sum -= v[i];
    return sum;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    cout<<missing(v);
    return 0;
}