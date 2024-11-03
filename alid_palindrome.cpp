#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "A man, a plan, a canal: Panama";
    string ans = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] >= '0' && s[i] <= '9')
        {
            ans += s[i];
        }
    }
    transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
    string jaydip = ans;
    reverse(jaydip.begin(), jaydip.end());
    if (jaydip == ans)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}