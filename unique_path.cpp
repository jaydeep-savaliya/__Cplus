#include <bits/stdc++.h>
using namespace std;
int uniquePaths(int n,int m){
    int N = m+n-2;
    int r= m-1;
    double ans = 1;
    for(int i=1;i<=r;i++){
        ans = ans*(N-r+i)/i;
    }
    return (int) ans;
}
int main(){
    int m = 3;
    int n = 7;
    int ans = uniquePaths(n,m);
    cout<<ans;
}