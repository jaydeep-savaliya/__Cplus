#include <bits/stdc++.h>
using namespace std;
int solve(int i,string& time,int n){
    if(i>=n){
            int f = time[0] - '0';
            int ff = time[1] - '0';
            int g = time[3] - '0';
            int gg = time[4] - '0';
            int d = f*10 + ff;
            int e = g*10 + gg;
            return (d >= 0 && d<=23 && e>=0 && e<=59); 
    }
    if(time[i]=='?'){
        int count = 0;
        for(int j=0;j<10;j++){
            time[i] = char('0'+j);
            count+=solve(i+1,time,n);
            time[i]='?';
        }
        return count;
    }
    return solve(i+1,time,n);
}
int countTime(string time){
    int n = time.size();
    return solve(0,time,n);
}
int main(){
    string time = "??:??";
    int ans = countTime(time);
    cout<<ans;
}