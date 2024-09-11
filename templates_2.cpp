#include<bits/stdc++.h>
using namespace std;
template<class T,int max>int arrMin(T arr[],int n){
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];
    return m;
}
int main(int argc, char const *argv[])
{
    int arr[] = {10,20,500,100,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<arrMin<int,100>(arr,n);
    return 0;
}
