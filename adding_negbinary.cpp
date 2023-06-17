#include <bits/stdc++.h>
using namespace std;
vector<int> addNegabinary(vector<int> &arr1,vector<int> &arr2){
    reverse(arr1.begin(),arr1.end());
        reverse(arr2.begin(),arr2.end());
        int len(max(arr1.size(),arr2.size()));
        int carry = 0;
        vector<int> ans;
        for(int i=0;i<len+2;i++){
            int curr1 = i<arr1.size()?arr1[i]:0;
            int curr2 = i<arr2.size()?arr2[i]:0;
            int sum = curr1 + curr2+carry;
            int r = sum%(-2);
            carry = sum/(-2);
            if(r<0){
                carry++;
                r+=abs(-2);
            }
            ans.push_back(r);
        }
        while(ans.size()>1 && ans.back()==0){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
int main(){
    vector<int> arr1{1,1,1,1,1};
    vector<int> arr2{1,0,1};
    vector<int> ans = addNegabinary(arr1,arr2);
    for(auto x:ans){
        cout<<x<<" ";
    }
}  