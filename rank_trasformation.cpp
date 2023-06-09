#include <bits/stdc++.h>
using namespace std;
vector<int> arrayRankTransform(vector<int> &arr){
    map<int,int> m;
    vector<int> A(arr);
    sort(A.begin(),A.end());
    for(int i=0;i<arr.size();i++){
        m.insert({A[i],m.size()+1});
    }
    for(int i=0;i<arr.size();i++){
        A[i] = m[arr[i]];
    }
    return A;
}
int main(){
    vector<int> arr{37,12,28,9,100,56,80,5,12};
    vector<int> ans = arrayRankTransform(arr);
    for(auto x:ans){
        cout<<x;
    }
}