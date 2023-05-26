#include <bits/stdc++.h>
using namespace std;
int main(){
        string start = "R";
        string end="L";
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        bool flag = false;
        if(start==end){
            flag  = true;
        }else{
            flag = false;
        }
        cout<<flag;
}