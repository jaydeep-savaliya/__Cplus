#include <bits/stdc++.h>
using namespace std;

int min_operations(vector<int>& nums) {
    int gcd_val = accumulate(nums.begin(), nums.end(), nums[0], [](int a, int b) { return __gcd(a, b); });
    if (gcd_val > 1) {
        int max_len = 0;
        int curr_len = 0;
        for (int num : nums) {
            if (num % gcd_val != 0) {
                curr_len++;
                max_len = max(max_len, curr_len);
            } else {
                curr_len = 0;
            }
        }
        int operations = max_len - 1;
    } else {
        int operations = nums.size();
    }
    int operations = nums.size();
    return operations + nums.size();
}

int main() {
    vector<int> nums = {2, 4, 6, 8};
    cout << min_operations(nums) << endl; 
    return 0;
}
