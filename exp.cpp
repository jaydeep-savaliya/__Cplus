#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,x;
    std::cin >> n >> x;

    std::string s(n, 'x');
    int curr = 1, rem = 0;

    for (int i = 0; i < n; ++i) {
        if (rem == 0 && curr == x) break;
        switch (curr % 4) {
        case 0:
            if (rem == 0) {
                s[i] = '+';
                ++curr;
            } else {
                s[i] = '*';
                rem -= 2;
            }
            break;
        case 1:
            s[i] = '+';
            ++curr;
            break;
        case 2:
            s[i] = '-';
            --curr;
            ++rem;
            break;
        case 3:
            s[i] = '*';
            rem += 2;
            ++curr;
            break;
        }
    }

    for (int i = 0; i < n; ++i)
        if (s[i] == 'x') s[i] = rem > 0 ? '-' : '+';
    if (curr != x || (curr - 1) % 4 != 0) 
        s = "-1";
    std::cout << s << std::endl;
}



    return 0;
}
