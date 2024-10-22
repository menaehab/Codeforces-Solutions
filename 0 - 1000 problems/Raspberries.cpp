#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, sum = 0,res = INT_MAX;
		cin >> n >> k;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % k == 0)
			{
				res = 0;
			}
			else
			{
				res = min(k - (arr[i] % k), res);
			}
			if (arr[i] % 2 == 0)
			{
				sum++;
			}
		}
		if (k == 4)
		{
			res = min(res, (2 - min(2, sum)));
		}
		cout << res << endl;
	}
}