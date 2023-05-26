#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int rev = 0;
    int sum = 0;
    while(x>0){
        rev = x%10;
        sum = sum*10 + rev;
        x = x/10;
    }
    cout<<sum<<endl;
    if(x==sum){
        cout<<true;
    }
    else{
        cout<<false;
    }
}
