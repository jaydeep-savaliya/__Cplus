#include <bits/stdc++.h>
using namespace std;

class websiteName 
{
  public:
    virtual string getName() = 0;
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
int main(int argc, char const *argv[])
{
    shortForm obj1;
    fullForm obj2;
    websiteName *ptr;
    ptr = &obj1;
    cout<<ptr->getName()<<endl;
    ptr = &obj2;
    cout<<ptr->getName()<<endl;
    return 0;
}
