#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
       int n = digits.size() - 1;
      
      for (int i = n; i >= 0; --i)
      { 
        if (digits[i] == 9)
            digits[i] = 0;
      else
      {  
          digits[i] += 1;
          return digits;
        }
      }
      digits.push_back(0);
      digits[0] = 1;
      return digits;
    } 
int main(){
    vector<int> digits{1,2,9};
    plusOne(digits);
    for(auto x:digits){
        cout<<x<<" ";
    }
}