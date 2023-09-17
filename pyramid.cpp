#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int i,j,k;
    k = n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"* ";
            }
        }
        k--;
        cout<<endl;
    }
}