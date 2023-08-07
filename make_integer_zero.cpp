#include <bits/stdc++.h>
using namespace std;
int n;
int solve(int num1,int num2){
        if(num1==0) return 1;
        int ans = 0;
        for(int i=0;i<=n;i++){
            int n = num1 -(pow(2,i)+num2);
            if(n==0) break;
            ans+=solve(n,num2);
            n = num1;
        }
        return ans;
    }
int makeTheIntegerZero(int num1,int num2){
    n=num1;
    if(num2>num1) return -1;
    if(num1==0) return 0;
    return solve(num1,num2);
}
int main(){
    int num1=3;
    int num2=-2;
    int ans = makeTheIntegerZero(num1,num2);
    cout<<ans;
}