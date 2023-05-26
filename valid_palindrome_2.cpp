#include <bits/stdc++.h>
using namespace std;
bool is_pali(string s,int start,int end){
            while(start<=end){
                if(s[start]==s[end]){
                    start++;
                    end--;
                }
                else{
                    return false;
                }
            }
            return true;
        }
bool validPalindrome(string s){
    int start = 0;
        int end = s.size()-1;
       while(start<=end){
           if(s[start]==s[end]){
               start++;
               end--;
           }else{
               return is_pali(s,start+1,end) || is_pali(s,start,end-1);
           }
       }
       return true;
}
int main(){
    string s="abca";
    bool ans = validPalindrome(s);
    cout<<ans;
}