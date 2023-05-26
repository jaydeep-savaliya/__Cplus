#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> pushed{1,2,3,4,5};
    vector<int> poped{4,5,3,2,1};
    stack<int> st;
    int j = 0;
    for(int i=0;i<pushed.size();i++){
        st.push(pushed[i]);
        while(!st.empty() && st.top()==poped[j]){
            st.pop();
            j++;
        }
    }
    if(st.empty()){
        cout<<false;
    }else{
        cout<<true;
    }
}