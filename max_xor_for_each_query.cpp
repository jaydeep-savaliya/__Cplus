#include <bits/stdc++.h>
using namespace std;

vector<int> getMaximumXor(vector<int> &nums, int maximunBit)
{
    int xorProduct = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        xorProduct = xorProduct ^ nums[i];
    }
    int mask = (1 << maximunBit) - 1;
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = xorProduct ^ mask;
        xorProduct = xorProduct ^ nums[nums.size() - 1 - i];
    }
    return ans;
}
int main()
{
    vector<int> nums{2, 3, 4, 7};
    int maximunBit = 3;
    vector<int> ans = getMaximumXor(nums, maximunBit);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}