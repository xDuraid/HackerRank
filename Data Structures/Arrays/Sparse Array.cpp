//Hacker Rank - Data Structure Practice Problem
//Sparse Arrays Solution

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> result(vector<string>s, vector<string> q)
{

	int n = s.size();
	int m = q.size();
	vector<int> a(m);

	for (int i = 0; i < m; i++) {
		int c = 0;//counter
		for (int j = 0; j < n; j++) {
			if (q[i] == s[j])
				c++;
		}
		a[i] = c;
	}

	return a;
}

int main()
{
	
	int n = 0, m = 0;
	//Entering strings
	cin >> n;
	vector<string> strings(n);
	for (int i = 0; i < n; i++)
	{
		cin >> strings[i];
	}
	//Entering queries
	cin >> m;
	vector<string> queries(m);
	for (int i = 0; i < m; i++)
	{
		cin >> queries[i];
	}

	vector<int> answer = result(strings, queries);
	for (int& i : answer)
		cout << i << endl;
	return 0;
}