#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    vector<int> v={0,0,1,1,1,1,2,3,3};
    int n = v.size();
    for(int i=0;i<n;i++){
        if(m[v[i]]==2){
            v.erase(v.begin()+i);
            i--;
        }else{
            m[v[i]]++;
        }
    }
    cout<<v.size();
    
}