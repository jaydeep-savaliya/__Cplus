// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
void sort(map<string, int>& M)
{
	multimap<int, string> MM;
	for (auto& it : M) {
		MM.insert({ it.second, it.first });
	}
	for (auto& it : MM) {
		cout << it.second << ' ' << it.first << endl;
	}
}
int main()
{
	map<string, int> M;
	M = { { "GfG", 3 }, { "To", 2 }, { "Welcome", 1 } };
	sort(M);
	return 0;
}
