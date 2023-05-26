#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> strs;
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        strs.push_back(arr[i]);
    }
    int sum = strs[0].length();
    for(int i=0;i<n;i++){
        int j = 0;
        while(j<strs[0].length() && strs[i][j] == strs[0][j])
            j++;
        sum = min(sum,j);
    }
    string s = strs[0].substr(0,sum);
    cout<<s;
}