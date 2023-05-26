#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> v={'a','e','i','o','u'};
    int count = 0;

    for(int i=0;i<s.length()-1;i++){
        if(v.find(s[i]) !=v.end()){
            count++;
            if(count >=3){
                cout<<"Happy"<<endl;
                break;
            }
        }
        else{
            count = 0;
        }
    }
    if(count <3){
        cout<<"Sad"<<endl;
    }
    return 0;
}