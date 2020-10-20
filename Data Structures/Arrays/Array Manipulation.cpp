//Hacker Rank - Data Structure Practice Problem
//Array Manipulation Solution
// solution based on prefix sum array algorithm

#include <iostream>
#include <vector>

using namespace std;

long long maxValue(int n, vector<vector<long long>> q)
{
    int m = q.size();
    long long max = 0;
    long long x = 0;//for calculating the prefix sum

    vector<long long>arr(n + 2);

    for (int i = 0; i < m; i++) {

        int a = q[i][0];
        int b = q[i][1];
        long long k = q[i][2];

        arr[a] += k;
        arr[b + 1] -= k;

    }
    
    for (int i = 1; i <= n; i++) {
        x += arr[i];
        if (x > max)
            max = x;
    }

    return max;
}


int main()
{
    int n = 0, m = 0;
    cin >> n >> m;

    vector<vector<long long>>queries(m, vector<long long>(3));// queries array
    for (int i = 0; i < m; i++)
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];

    long long result = maxValue(n, queries);//storing result

    cout << result;

    return 0;
}
