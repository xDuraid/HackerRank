//Hacker Rank - Data Structure Practice Problem
//2D Array - DS Solution
#include <iostream>
#include <vector>

using namespace std;

int HourglassMaxSum(vector<vector<int>> v)
{
	int maxSum = -64, sum = 0;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			sum = v[i][j] + v[i][j + 1] + v[i][j + 2]
				+ v[i + 1][j + 1]
				+ v[i + 2][j] + v[i + 2][j + 1] + v[i + 2][j + 2];
			if (sum > maxSum)
				maxSum = sum;
		}
	}
	return maxSum;
}

int main()
{
	
	
	vector<vector<int>> a(6, vector<int>(6));
	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			cin >> a[i][j];
		}
	}
	int result = HourglassMaxSum(a);
	cout << result;
	
	
	return 0;
}