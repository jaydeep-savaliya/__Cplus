#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 5;
    int z = 6;
    char y = 'A';
    char p = 'C';
    int* const i = &x;
    char* const j = &y;
    *i = 10;
    *j = 'D';
    cout<<*i<<" "<<*j<<endl;
    cout<<i<<" "<<j;
    return 0;
}
