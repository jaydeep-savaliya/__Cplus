#include <bits/stdc++.h>
using namespace std;

 string reversePrefix(string word, char ch) {
    int n = word.length();
        string ans;
        int count =0;
        if(word.find(ch)== string::npos){
            return word;
        }
        for(int i=0;i<n;i++){
            count++;
            if(word[i]==ch){
                break;
            }
        }
        
        int m = count-1;
        int i=0;
        while(i<=m){
            swap(word[i],word[m]);
            m--;
            i++;
        }
        return word;
 }
int main(){
    string s = "abcd";
    char ch ='b';

    reversePrefix(s,ch);
    cout<<s;
}