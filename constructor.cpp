#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        int rno;
        char name[50];
        double fee;
        student(int,char[],double);
        student(student &t){
            rno = t.rno;
            strcpy(name,t.name);
            fee = t.fee;
        }
        void display();
};
student::student(int no,char n[],double f){
    rno = no;
    strcpy(name,n);
    fee = f;
}

void student::display(){
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
int main()
{
    student st(1001,"Manjeet",1000.01);
    student *ptr;
    ptr = &st;
    ptr->display();
    return 0;
}
