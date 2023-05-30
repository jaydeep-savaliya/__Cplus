#include <bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
int subarrayLCM(vector<int> &nums,int k){
    int n = nums.size();
    int count = 0;  
    for(int i=0;i<n;i++){
        int g = nums[i];
        if(g==k) count++;
        for(int j=i+1;j<n;j++){
            g = lcm(g,nums[j]);
            if(g==k) count++;
            else if(g<k) continue;
            else break;
        }
    }
    return count;
}
int main(){
    vector<int> nums{3,6,2,7,1};
    int k = 6;
    int ans = subarrayLCM(nums,k);
    cout<<ans;
}