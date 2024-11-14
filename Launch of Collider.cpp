#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, res = INT_MAX;
	string x;
	cin >> n >> x;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (x[i] == 'R' && x[i + 1] == 'L')
		{
			res = min((arr[i + 1] - arr[i]) / 2,res);
		}
	}
	if (res == INT_MAX)
	{
		cout << -1;
	}
	else
	{
		cout << res;
	}
}