#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int div = a;
    int count = 2;
    vector<int> v;
    while(count<5){
        div = a/count;
        v.push_back(div);
        count++;
    }
    int sum = 0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    if(sum>a){
         cout<<sum<<endl;
    }
else{
    cout<<a;
}
}