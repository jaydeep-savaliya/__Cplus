#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int> test, int target)
{
    set<vector<int>> s;
    vector<vector<int>> v;
    int n = test.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                int sum = test[i];
                sum += test[j];
                sum += test[k];
                sum += test[l];
                if (sum == target)
                {
                    s.insert({test[i], test[j], test[k], test[l]});
                    k++;
                    l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }
    for (auto x : s)
    {
        v.push_back(x);
    }
    return v;
}
int main()
{
    vector<int> test;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        test.push_back(arr[i]);
    }
    int target = 1;
    vector<vector<int>> output = foursum(test, target);
    for (int i = 0; i < output.size(); i++)
    {
        for (auto j = output[i].begin(); j != output[i].end(); j++)
        {
            cout << *j << " ";
        }
        cout << endl;
    }
    return 0;
}