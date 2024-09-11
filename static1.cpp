#include <bits/stdc++.h>
using namespace std;
class Test{
    static int x;
    public:
        Test(){
            x++;
        }
        static int get() {return x;}
};
int Test::x=0;
int main(int argc, char const *argv[])
{
    cout<<Test::get();
    Test t[5];
    cout<<Test::get();
    return 0;
}
