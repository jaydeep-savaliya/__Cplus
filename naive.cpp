// C++ program for Naive Pattern
// Searching algorithm
#include <bits/stdc++.h>
using namespace std;

void search(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);
    int index = 0;
	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		int j=0;

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j== M) {// if pat[0...M-1] = txt[i, i+1, ...i+M-1]
			index = i;
        }else{
            index = -1;
        }
        
	}
    cout<<index;
}

// Driver's Code
int main()
{
	char txt[] = "AABAACAADAABAAABAA";
	char pat[] = "AABDA";
	
	// Function call
	search(pat, txt);
	return 0;
}

// This code is contributed
// by Akanksha Rai
