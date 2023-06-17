#include <bits/stdc++.h>
using namespace std;
bool isFascinating(int n){
    int a = 2*n;
        int b = 3*n;
        set<int> s;
        while(n){
            int rem = n%10;
            if(rem==0) return false;
            if(s.find(rem)!=s.end()){
                return false;
                break;
            }
            s.insert(rem);
            n/=10;
        }
        while(a){
            int rem = a%10;
            if(rem==0) return false;
            if(s.find(rem)!=s.end()){
                return false;
                break;
            }
            s.insert(rem);
            a/=10;
        }
        while(b){
            int rem = b%10;
            if(rem==0) return false;
            if(s.find(rem)!=s.end()){
                return false;
                break;
            }
            s.insert(rem);
            b/=10;
        }
        return true;
}
int main(){
    int n = 121;
    bool ans = isFascinating(n);
    cout<<ans;
}