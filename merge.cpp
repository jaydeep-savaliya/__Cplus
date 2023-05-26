#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& a,int m,vector<int>& b,int n){
    vector<int> v;
    int i=0,j=0;
    while(i<m && j<n){
        if(a[i]<=b[j]){
            v.push_back(a[i]);
            i++;
        }else{
            v.push_back(b[j]);
            j++;
        }
    }
    while(i<m){
        v.push_back(a[i]);
        i++;
    }
    while(j<n){
        v.push_back(b[j]);
        j++;
    }
    for(auto x:v){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> a={0};
    
    vector<int> b={1};
    
    int m = 0;
    int n = 1;
    merge(a,m,b,n);
    return 0;
}