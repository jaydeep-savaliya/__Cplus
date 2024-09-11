#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> test){
    sort(test.begin(),test.end());
    int n = test.size();
    int target = 0;
    set<vector<int>> s;
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){ 
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = test[i] + test[j] + test[k];
            if(sum==target){
                s.insert({test[i],test[j],test[k]});
                j++;
                k--;
            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
        }
    }
    for(auto x:s){
        ans.push_back(x);
    }
    return ans;
}

int main(){
    vector<int> test;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        test.push_back(arr[i]);
    }
    vector<vector<int>> output = threesum(test);
    
   for(int i=0;i<output.size();i++){
    for(auto j=output[i].begin();j!=output[i].end();j++){
        cout<<*j<<" ";
    }cout<<endl;
   }
} 