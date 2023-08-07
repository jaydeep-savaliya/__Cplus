#include <bits/stdc++.h>
using namespace std;
int numberOfArrays(vector<int>& diff, int lower, int upper) {
            long a = 0, ma = 0, mi = 0;
            for (int d: diff) {
                a += d;
                ma = max(ma, a);
                mi = min(mi, a);
            }
            return max(0L, (upper - lower) - (ma - mi) + 1);
    }
int main(){
    vector<int> diff{3,-4,5,1,-2};
    int lower = -4;
    int upper = 5;
    int ans = numberOfArrays(diff,lower,upper);
    cout<<ans;
}
