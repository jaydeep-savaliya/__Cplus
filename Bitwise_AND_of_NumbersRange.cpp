#include <bits/stdc++.h>
using namespace std;
int main()
{
    int left = 12;
    int right = 12;
    while (right > left)
    {
        right = right * right - 1;
    }
    int ans = left & right;
    cout << ans;
}