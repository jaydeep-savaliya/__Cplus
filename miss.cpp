#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={ 4, 3, 6, 6,2};
    int n = v.size();
    unordered_map<int,bool> m;
    for(auto x:v){
        if(m.find(x)==m.end()){
            m[x]=true;
        }else{
            cout<<"repeating is:"<<x<<endl;
        }
    }
    for(int16_t i=1;i<=n;i++){
        if(m.find(i)==m.end()){
            cout<<"missing:"<<i;
        }
    }
    return 0;
}