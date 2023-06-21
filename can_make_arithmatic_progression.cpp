#include <bits/stdc++.h>
using namespace std;
bool canMakeArithmeticProgression(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    if(n==0 || n==1 || n==2){
        return true;
    }
    int d = arr[1]-arr[0];
    for(int i=2;i<n;i++){
        if(arr[i]-arr[i-1]!=d) return false;
    }
    return true;
}
int main(){
    vector<int> arr{3,5,1};
    bool ans = canMakeArithmeticProgression(arr);
    cout<<ans;
}