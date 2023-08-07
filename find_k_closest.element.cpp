#include <bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int> &arr,int k,int x){
    int n = arr.size();
    int j = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    int i = j-1;
    while(j-i-1<k){
        if(i==-1 || (j<n && abs(arr[j]-x)<abs(arr[i]-x))) j++;
        else i--;
    }
    return vector<int>(arr.begin()+i+1,arr.begin()+j);
}
int main(){
    vector<int> arr{1,2,3,4,5};
    int k = 4;
    int x = 3;
    vector<int> ans = findClosestElements(arr,k,x);
    for(auto x:ans){
        cout<<x<<" "; 
    }
}