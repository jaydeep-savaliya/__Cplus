
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<int,int> m;
    map<int,int> ::iterator it = m.begin();

    m.insert({1,1});
    m.insert({2,2});
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}