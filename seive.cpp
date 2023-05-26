#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prime(50,1);
    int n = 50;
    for(int i=2;i<50;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}