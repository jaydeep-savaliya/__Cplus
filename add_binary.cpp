#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "11";
    string b ="1110";
    string ans;
    int carry = 0;
    int  i =a.size()-1;
    int j = b.size()-1;
    while(i>=0 || j>=0 || carry){
        if(i>=0){
            carry+=a[i]-'0';
            i--;
        }
        if(j>=0){
            carry+=b[j]-'0';
            j--;
        }
        ans+=(carry%2+'0');
        carry =carry/2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}