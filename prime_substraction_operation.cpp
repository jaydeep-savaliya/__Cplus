#include <bits/stdc++.h>
using namespace std;

bool primeSubOperation(vector<int> &nums){
    int maxElement = *max_element(nums.begin(),nums.end());
    vector<int> sieve(maxElement+1,1);
    for(int i=2;i<=(maxElement+1);i++){
        if(sieve[i]==1){
            for(int j=i*i;j<=maxElement;j+=i){
                sieve[j] = 0;
            }
        }
    }
    int currValue = 0;
    int i = 0;
    while(i<nums.size()){
        int diff = nums[i] - currValue;
        if(diff<0){
            return 0;
        }
        if(sieve[diff]==1 or diff==0){
            i++;
            currValue++;
        }else{
            currValue++;
        }
    }
    return 1;
}
int main(){
    vector<int> nums{4,9,6,10};
    bool ans = primeSubOperation(nums);
    cout<<ans;
}