#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int r;
        int i;
    public:
        Complex(int real=0,int img=0){
            r = real;
            i = img;
        }
        Complex operator+(Complex const& obj){
            Complex res;
            res.r = obj.r+r;
            res.i = obj.i+i;
            return res;
        }
        void print(){
            cout<<r<<"+"<<i<<endl;
        }
};
int main(int argc, char const *argv[])
{
    Complex obj(10,15),obj2(5,10);
    Complex c = obj+obj2;
    c.print();
    return 0;
}
