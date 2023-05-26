#include <bits/stdc++.h>
using namespace std;
bool sortByVal(const pair<string, int> &a, 
               const pair<string, int> &b) 
{ 
    return (a.second < b.second); 
} 
int main(){
    vector<string> names{"Mary","John","Emma"};
    vector<int> heights{180,165,170};
     vector<pair<int,string>> ref;
        for(int i=0;i<names.size();i++){
            ref.push_back({heights[i],names[i]});
        }
        // sort(ref.begin(),ref.end(),greater<>());
        sort(ref.rbegin(),ref.rend());
        for(auto x:ref){
            cout<<x.first<<" "<<x.second;
            cout<<endl;
        }

}