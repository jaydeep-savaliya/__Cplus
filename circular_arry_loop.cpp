#include<bits/stdc++.h>
using namespace std;
bool isCycleRec(int v, vector<int>adj[],
			vector<bool> &visited, vector<bool> &recur)
{
	visited[v] = true;
	recur[v] = true;
	for (int i=0; i<adj[v].size(); i++)
	{
		if (visited[adj[v][i]] == false)
		{
			if (isCycleRec(adj[v][i], adj, visited, recur))
				return true;
		}
		else if (visited[adj[v][i]] == true &&
				recur[adj[v][i]] == true)
			return true;
	}
	recur[v] = false;
	return false;
}
bool isCycle(int arr[], int n)
{
	vector<int>adj[n];
	for (int i=0; i<n; i++)
	if (i != (i+arr[i]+n)%n)
		adj[i].push_back((i+arr[i]+n)%n);
    

	vector<bool> visited(n, false);
	vector<bool> recur(n, false);
	for (int i=0; i<n; i++)
		if (visited[i]==false)
			if (isCycleRec(i, adj, visited, recur))
				return true;
	return false;
}
int main(void)
{
	int arr[] = {-2,1,-1,-2,-2};
	int n = sizeof(arr)/sizeof(arr[0]);
	if (isCycle(arr, n))
		cout << "Yes"<<endl;
	else
		cout << "No"<<endl;
	return 0;
}
