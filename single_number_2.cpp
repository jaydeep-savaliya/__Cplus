#include <bits/stdc++.h>
using namespace std;
int main(){
        vector<int> nums{2,2,3,2};
        int n = nums.size();
        int one = 0;
        int two = 0;
        vector<int> ones;
        vector<int> twos;
        for(int i=0;i<n;i++){
            one = (one^nums[i])&~two;
            two = (two^nums[i])&~one;
            ones.push_back(one);
            twos.push_back(two);
        }
        for(auto x:ones){
            cout<<x<<" ";
        }cout<<endl;
        for(auto x:twos){
            cout<<x<<" ";
        }cout<<endl;
        cout<<one;
}