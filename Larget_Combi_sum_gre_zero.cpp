#include <bits/stdc++.h>
using namespace std;

int largestCombination(vector<int> &candidates)
{
    int ans = 0;
    for (int i = 0; i < 24; i++)
    {
        int count = 0;
        for (int x : candidates)
        {
            if ((x & (1 << i)) != 0)
            {
                count++;
            }
        }
        ans = max(ans, count);
    }
    return ans;
}
int main()
{
    vector<int> candidates{6,4,7,1,5};
    int ans = largestCombination(candidates);
    cout << ans;
}