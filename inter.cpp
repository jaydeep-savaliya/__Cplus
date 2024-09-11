#include <bits/stdc++.h>
using namespace std;
class ClassA
{
public:
	ClassA()
	{
		cout << "base constructor" << endl;
	}
	virtual~ClassA()
	{
		cout << "base destructor" << endl;
	}
};
class ClassB : public ClassA
{
public:
	ClassB()
	{
		cout << "derived constructor" << endl;
	}
	~ClassB()
	{
		cout << "derived destructor" << endl;
	}
};
int main()
{
	ClassA *obj = new ClassB();
	delete obj;
	cout << "End of Program" << endl;
	return 0;
}