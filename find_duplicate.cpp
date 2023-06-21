#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr){
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);
    fast = arr[0];
    while(slow!=fast){
        fast = arr[fast];
        slow = arr[slow];
    }
    return slow;
}
int main(){
    vector < int > arr{1,3,4,2,3};
    int ans = findDuplicate(arr);
    cout<<ans;
}