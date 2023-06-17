#include <bits/stdc++.h>
using namespace std;
double multiply(double mid,int n){
    double ans = 1.0;
    for(int i=1;i<=n;i++){
        ans*=mid;
    }
    return ans;
}
double getNthRoot(int n,int m){
    double l = 1;
    double h = m;
    double me = 1e-7;
    while((h-l)>me){
        double mid = (h+l)/2.0;
        if(multiply(mid,n)<m){
            l = mid;
        }else{
            h=mid;
        }
    }
    return l;
}
int main(){
    int n = 5;
    int m = 243;
    double ans = getNthRoot(n,m);
    cout<<ans;
}