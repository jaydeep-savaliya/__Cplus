#include <bits/stdc++.h>
using namespace std;
int maxLen(vector<int> &arr){
    int sum = 0;
    int ans = 0;
    unordered_map<int,int> m;
    m[0] = -1;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(m.find(sum)==m.end()){
            m[sum] = i;
        }
        int size = i-m[sum];
        ans = max(ans,size); 
    }
    return ans;
}
int main(){
    vector<int> arr{1,-1,0,0,1};
    int ans = maxLen(arr);
    cout<<ans;
}
