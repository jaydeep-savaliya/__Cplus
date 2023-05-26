#include <bits/stdc++.h>
#define n 100
using namespace std;

class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top = -1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"NO element to pop"<<endl;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"Empty"<<endl;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }

};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
}