#include <bits/stdc++.h>
using namespace std;
char nextGreatestLetter(vector<char> &letters,char target){
    int l = 0;
    int h = letters.size()-1;
    if(letters[0]>target) return letters[0];
    else if(letters[letters.size()-1]<=target)  return letters[0];
    char ans;
    while(l<=h){
        int mid = l +(h-l)/2;
        if(letters[mid]>target){
            ans = letters[mid];
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<char> letters{'c','f','j'};
    char target = 'c';
    char ans = nextGreatestLetter(letters,target);
    cout<<ans;
}