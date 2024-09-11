#include <bits/stdc++.h>
using namespace std;
 
template <typename T>T pokemax(T x, T y){
    return (x > y)? x : y;
}
int main()
{
    cout << pokemax<int>(3, 7) << std::endl;
    cout << pokemax<double>(3.0, 7.0) << std::endl;
    cout << pokemax<long>(3, 7.0) << std::endl;
    return 0;
}