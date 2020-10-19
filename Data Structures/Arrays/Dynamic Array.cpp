//Hacker Rank - Data Structure Practice Problem
//Dynamic Array Solution
#include <iostream>
#include <vector>

using namespace std;

vector<int> DynamicArrayResult(int n, vector<vector<int>> queries)
{

	int lastAnswer = 0;
	vector<vector<int>>seq(n);
	size_t m = queries.size();
	vector<int>answer;
	for (size_t i = 0; i < m; i++)
	{
		int t = queries[i][0];
		int x = queries[i][1];
		int y = queries[i][2];
		
		int row = (x ^ lastAnswer) % n;
		
		if (t == 1) {
			seq[row].push_back(y);
		}

		else if (t == 2) {
			int col = y % seq[row].size();
			lastAnswer = seq[row][col];
			answer.push_back(lastAnswer);
		}
		
	}

	return answer;
}

int main()
{

	int n = 0, m = 0;
	cin >> n >> m;

	vector<vector<int>> q(m, vector<int>(3));
	
	for (size_t i = 0; i < m; i++)
	{
		cin >> q[i][0] >> q[i][1] >> q[i][2];
	}

	vector <int> result = DynamicArrayResult(n, q);
	
	for (size_t i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}