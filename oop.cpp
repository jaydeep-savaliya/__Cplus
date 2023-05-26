#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void print(){
        cout<<name <<" "<<age<<" "<<gender;
    }
};

int main(){
    student a;
    a.name = "jaydip";
    a.age = 19;
    a.gender = 1;
    a.print();
    return 0;
}