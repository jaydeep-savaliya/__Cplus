#include <bits/stdc++.h>
using namespace std;
class Encapsulate{
    private:
        int x;
    public:
        void set(int y){
            x = y;
        }
        int get(){
            return x;
        }
};
int main(int argc, char const *argv[])
{
    Encapsulate obj;
    Encapsulate* ptr;
    ptr = &obj;
    ptr->set(789456);
    cout<<ptr->get();
}
