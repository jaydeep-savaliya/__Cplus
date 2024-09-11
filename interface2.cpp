#include <bits/stdc++.h>
using namespace std;
class Shape{
    public:
        int getArea(){
            cout<<"Area of shape"<<endl;
            cout<<"sbdjhusghcjs";
        }
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
    protected:
        int width;
        int height;
};
class Rect:public Shape{
    public:
        int getArea(){
            return width*height;
        }
};
int main(int argc, char const *argv[])
{
    Rect r1;
    r1.setHeight(10);
    r1.setWidth(20);
    cout<<r1.getArea();
    return 0;
}
