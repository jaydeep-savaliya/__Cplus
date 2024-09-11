#include <bits/stdc++.h>
using namespace std;

double gcd(double x,double y){
    return fabs(y)<1e2-2?x:gcd(y,fmod(x,y));
}
int main(){
    double x1,x2,x3,y1,y2,y3;
    x1 = 0;
    x2=1;
    x3=0;
    y1=0;
    y2=1;
    y3=1;
    double a = hypot(x1-x2,y1-y2);
    double b = hypot(x1-x2,y1-y3);
    double c = hypot(x2-x3,y2-y3);
    double s = (a+b+c)/2;
    double r = a*b*c/4/sqrt((s*(s-a)*(s-b)*(s-c)));
    double A=acos((-a*a+b*b+c*c)/(2*b*c));
    double B=acos((-b*b+a*a+c*c)/(2*a*c));
    double C=acos((-c*c+a*a+b*b)/(2*a*b));
    double g = gcd(A,gcd(B,C));
    cout<<1.570796/g*r*r*sin(2*g);
    return 0;
}