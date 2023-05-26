#include <bits/stdc++.h>
using namespace std;
bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int> m;
        int n = deck.size();
        for(int i=0;i<n;i++){
            m[deck[i]]++;
        }
        int gcd_val = m.begin()->second;
        for(auto it:m){
            gcd_val = __gcd(gcd_val,it.second);
        }
        return gcd_val!=1;
    }
int main(){
    vector<int> deck{1,2,3,4,4,4,3,2,1};
    cout<<hasGroupsSizeX(deck)<<endl;
}