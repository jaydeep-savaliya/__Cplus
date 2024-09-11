#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x{10};
    char y{'M'};
    const int* i = &x;
    const char* j = &y;
    x = 9;
    y = 'D';
    cout<<*i<<" "<<*j;
    return 0;
}
