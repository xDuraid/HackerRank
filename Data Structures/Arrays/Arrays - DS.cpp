//Hacker Rank - Data Structure Practice Problem
//Array - DS Solution
#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArray(vector <int> v)
{
	int n = v.size();
	for (int i = 0; i < n / 2; i++) {
		int temp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = temp;
	}
	return v;
}
int main()
{
	
	
	int n = 0;
	cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int>reversed_v = reverseArray(a);
	for (size_t i = 0; i < n; i++)
	{
		cout << reversed_v[i] << " ";
	}
	
	
	return 0;
}