#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 5;
    char y = 'A';
    const int* const i = &x;
    const char* const j = &y;
    cout<<*i<<" "<<*j<<endl;
    return 0;
}
