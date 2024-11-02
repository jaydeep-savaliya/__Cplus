#include <bits/stdc++.h>
using namespace std;
class Base
{
private:
  int base_variable;

public:
  Base(int x = 10)
  {
    base_variable = x;
  }
  int GetBaseVariable() const { return base_variable; }
};

class Derived : public Base
{
public:
  Derived() : Base()
  {
    cout << "The value of base_variable is: " << GetBaseVariable() << endl;
  }
};
int main(int argc, char const *argv[])
{
  Base b(10);
  Derived d;
  return 0;
}
