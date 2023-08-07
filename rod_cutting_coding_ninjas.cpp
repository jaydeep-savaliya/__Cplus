#include <bits/stdc++.h>
using namespace std;
int cutRod(vector<int>& price,int N) {
    vector<int> cur (N+1,0);
    for(int i=0; i<=N; i++){
        cur[i] = i*price[0];
    }
    for(int ind=1; ind<N; ind++){
        for(int length =0; length<=N; length++){
             int notTaken = 0 + cur[length];
             int taken = INT_MIN;
             int rodLength = ind+1;
             if(rodLength <= length)
                taken = price[ind] + cur[length-rodLength];
             cur[length] = max(notTaken,taken);   
        }
    }
    
    return cur[N];
}
int main(){
    int n = 5;
    vector<int> price{2, 5, 7, 8 ,10};
    int ans = cutRod(price,n);
    cout<<ans;
}