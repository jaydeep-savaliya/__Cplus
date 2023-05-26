#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={23,30,42,57,90};
    vector<int> x={21,23,35,57,88,77,90,92};
    vector<int> y = {21,23,30,57,88,77,90};
    vector<int> fre(256,0);
    for(int i=0;i<v.size();i++){
        fre[v[i]]++;
    }
    for(int i=0;i<x.size();i++){
        fre[x[i]]++;
    }
    for(int i=0;i<y.size();i++){
        fre[y[i]]++;
    }
    set<int> s;

    for(int i=0;i<fre.size();i++){
        if(fre[i]>1){
            s.insert(i);
        }
    }
   cout<<s.size()<<endl;
    for(auto x:s){
        cout<<x<<" ";
    }
}