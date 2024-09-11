#include<bits/stdc++.h>
using namespace std;
string reorganizeString(string s){
        vector<int> fre(26, 0);
        for (char c : s) {
            fre[c - 'a']++;
        }
        int maxCount = 0, letter = 0;
        for (int i = 0; i < fre.size(); i++) {
            if (fre[i] > maxCount) {
                maxCount = fre[i];
                letter = i;
            }
        }
        if (maxCount > (s.length() + 1) / 2) {
            return "";
        }
        string ans = s;
        int index = 0;
        while (fre[letter] != 0) {
            ans[index] = char(letter + 'a');
            index += 2;
            fre[letter]--;
        }
        for (int i = 0; i < fre.size(); i++) {
            while (fre[i] > 0) {
                if (index >= s.length()) {
                    index = 1;
                }
                ans[index] = char(i + 'a');
                index += 2;
                fre[i]--;
            }
        }

        return ans;
}
int main(){
    string s = "xogbmcjjie";
    string ans = reorganizeString(s);
    cout<<ans;
}