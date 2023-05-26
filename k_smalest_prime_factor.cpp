#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,2,3,5};
    int n = nums.size();
    priority_queue<pair<double,vector<int>>> q;
    int k =3;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            double fraction = ((1.00*nums[i])/(nums[j]));
            if(q.size()<k){
                q.push({fraction,{nums[i],nums[j]}});
            }else{
                if(q.top().first>fraction){
                    q.pop();
                    q.push({fraction,{nums[i],nums[j]}});
                }
            }
        }
    }
    cout<<q.top().second[0]<<" "<<q.top().second[1] ;
}