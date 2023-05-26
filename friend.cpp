#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> v={1,1,2,2,3};
    int n = v.size();
    sort(v.begin(),v.end());
    int count = 0;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            count++;
        }
    }
    cout<<n-count;
    return 0;
}