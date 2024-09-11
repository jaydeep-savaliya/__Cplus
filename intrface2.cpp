// C++ program to implement 
// the Interface 
#include <iostream> 
#include <string> 
using namespace std; 
class websiteName 
{ 
public: 
	virtual string getName()=0; 
}; 

class shortForm : public websiteName 
{ 
public: 
	string getName() 
	{ 
	return "GFG"; 
	} 
}; 

class fullForm : public websiteName 
{ 
public: 
	string getName() 
	{ 
	return "GeeksforGeeks"; 
	} 
}; 
int main() 
{ 
	shortForm obj1; 
	fullForm obj2; 
	websiteName* ptr; 
	ptr = &obj1; 
	cout << "Short form - " << 
			ptr->getName(); 
	ptr = &obj2; 
	cout << "\nFull form - " << 
			ptr->getName(); 
	return 0; 
}
