#include <bits/stdc++.h>
using namespace std;
int nextnumber(int n){

    int rem = 0;
    int sum = 0;
    while(n!=0){
        rem = n%10;
        sum+=rem*rem;
        n = n/10;
    }
    return sum;
}
int main(){
    int n = 19;
    unordered_set<int> s;
    while(n!=1 && !s.count(n)){
        s.insert(n);
        n=nextnumber(n);
    }
    if(n==1){
        cout<<true;
    }else{
        cout<<false;
    }
}