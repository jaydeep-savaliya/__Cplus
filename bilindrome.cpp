#include<bits/stdc++.h>
using namespace std;

string print(string s , int i){
	int j = 0;
	string sub;
	while(i>0){
		if(i & 1){
			sub.push_back(s[j]); 
		}
		j++; 
		i = i >> 1;
	}
	
	return sub;
}

void check(string s){
    vector<int> ans;
    if(s.length()==1){
        return;
    }else{
        bool pali = false;
        string p= s;
        reverse(s.begin(),s.end());
        if(s==p){
            pali = true;
        }
        if(pali){
            ans.push_back(s.length());
        }
    }
    int min_idx = INT_MAX;
    for(int i=0;i<ans.size();i++){
        min_idx = min(min_idx,ans[i]);
    }
    cout<<min_idx;
}
vector<string> createsubsets(string& s){
	
	vector <string> res;
	for(int i = 1 ; i <= ((1 << s.size()) - 1) ; i++){
		res.push_back(print(s,i));
	}
	return res;
}

int main(){
	string s;
    cin>>s;
	vector <string> print = createsubsets(s);
	
	for(auto x:print){
        check(x);
    }
	return 0;
}
