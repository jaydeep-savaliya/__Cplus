#include <bits/stdc++.h>
using namespace std;
int first(int x)
{
    if (x > 10)
    {
        while (x > 10)
        {
            x = x / 10;
        }
    }
    else
    {
        return x;
    }
    return x;
}
int last(int y)
{
    return y % 10;
}
int countBeautifulPairs(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    map<pair<int, int>, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = first(nums[i]);
            int y = last(nums[j]);
            if (__gcd(x, y) == 1)
            {
                ans++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums{756, 1324, 2419, 495, 106, 111, 1649, 1474, 2001, 1633, 273, 1804, 2102, 1782, 705, 1529, 1761, 1613, 111, 186, 412};
    int ans = countBeautifulPairs(nums);
    cout << ans;
}