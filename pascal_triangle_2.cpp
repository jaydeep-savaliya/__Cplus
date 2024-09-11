#include <bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex){
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<=rowIndex;i++){
        long prev = (long) ans[i-1];
        long curr = prev * (rowIndex-i+1)/i;
        ans.push_back((int)curr);
    }
    return ans;
}
int main()
{
    int rowIndex = 3;
    vector<int> ans = getRow(rowIndex);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}
