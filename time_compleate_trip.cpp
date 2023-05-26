#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> nums{5,10,10};
    long long totalTrips = 9;
    long long l = 0;
    long  long h = nums[nums.size()-1]*totalTrips;
    long long timeTaken = nums[nums.size()-1]*totalTrips;
    while(l<h){
        long long mid = l+(h-l)/2;
        long long tt = 0;
        for(int i=0;i<nums.size();i++){
            tt+=(mid/nums[i]);
        }
        if(tt>=totalTrips){
            timeTaken = min(timeTaken,mid);
            h = mid;
        }else{
            l = mid+1;
        }
    }
    cout<<timeTaken;
}