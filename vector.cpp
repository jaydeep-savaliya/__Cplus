#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back({a[i],i});
    }

    vector<pair<int,int>> ::iterator it;
    for(it=v.begin();it !=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}