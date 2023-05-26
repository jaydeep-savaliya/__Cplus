#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,7,3,6,5,6};
    int n = nums.size();
    int sum = accumulate(nums.begin(),nums.end(),0);
    cout<<sum;
}