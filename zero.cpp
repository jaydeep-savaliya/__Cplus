#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 14;
    int count = 0;
    while(num>0){
        if(num%2==0){
            num = num/2;
            count++;
        }
        else{
            num = num - 1;
            count++;
        }
    }
    cout<<count;
}