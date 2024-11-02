#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closest = 0;
    int minsum = INT_MAX;
    int sum = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int s = i + 1;
        int e = n - 1;
        while (s < e)
        {
            sum = nums[i] + nums[s] + nums[e];
            int closetst_sum = abs(sum - target);
            if (sum == target)
            {
                return sum;
            }
            if (closetst_sum < minsum)
            {
                minsum = closetst_sum;
                closest = sum;
            }
            if (sum < target)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    return closest;
}
int main()
{
    vector<int> nums{-1, 2, 1, -4};
    int target = 1;
    int ans = threeSumClosest(nums, target);
    cout << ans;
}