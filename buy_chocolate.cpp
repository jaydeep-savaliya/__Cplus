#include <bits/stdc++.h>
using namespace std;

int buyChocolate(vector<int> &prices, int money)
{
    int ans = INT_MAX;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[i] + prices[j] <= money)
            {
                ans = min(ans, prices[i] + prices[j]);
            }
        }
    }
    if (ans == INT_MAX)
        return money;
    return money - ans;
}
int main()
{
    vector<int> prices = {98, 54, 6, 34, 66, 63, 52, 39};
    int money = 62;
    int ans = buyChocolate(prices, money);
    cout << ans;
}