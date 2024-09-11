//templates is a pass data type as a parameter in class or function is call templates
#include <bits/stdc++.h>
using namespace std;
template<typename T> T mymax(T x,T y){
    return (x>y)?x:y;
} 
int main(int argc, char const *argv[])
{
    cout<<mymax<int>(3,7);
    cout<<mymax<double>(5.56,5.65);
    return 0;
}
