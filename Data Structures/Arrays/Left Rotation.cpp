//Hacker Rank - Data Structure Practice Problem
//Left Rotation Solution
#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotation(vector<int> array, int d)
{

	vector<int> b(array.begin(), array.begin() + d);
	array.erase(array.begin(), array.begin() + d);
	array.insert(array.end(), b.begin(), b.end());

	return array;
}

int main()
{
	int n = 0, d = 0;
	cin >> n >> d;
	vector<int> a(n);
	for (int& i : a)
		cin >> i;
	vector<int> result = leftRotation(a, d);
	for (int& i : result)
		cout << i << " ";

	return 0;
}