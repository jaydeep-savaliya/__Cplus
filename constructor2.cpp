#include<bits/stdc++.h>
using namespace std;
class student{
	int rno;
	char name[50];
	double fee;
	public:
	student(int,char[],double);
	student(student &t)	
	{
		rno=t.rno;
		strcpy(name,t.name);
	}
	void display();
	void disp()
	{
		cout<<endl<<rno<<"\t"<<name;
	}
};
	student::student(int no, char n[],double f){
		rno=no;
		strcpy(name,n);
		fee=f;
	}

	void student::display(){
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
int main()
{
	student s(1001,"Manjeet",10000);
	s.display();
	student manjeet(s); 
	manjeet.disp();
	
	return 0;
}
