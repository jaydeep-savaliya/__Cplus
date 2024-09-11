#include <bits/stdc++.h>
using namespace std;
template<int n> struct functruct{
    static const int val = 2 * functruct<n-1>::val;
};
template<> struct functruct<0>
{
    static const int val = 1;
};
int main(int argc, char const *argv[])
{
    cout<<functruct<10>::val;
    return 0;
}
/*Thank You*/
