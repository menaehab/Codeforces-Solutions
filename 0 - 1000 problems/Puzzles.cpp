#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int x, n,res = INT_MAX;
	cin >> x >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		if (i + x - 1 >= n)
		{
			break;
		}
		res = min(arr[i + x - 1] - arr[i], res);
	}
	cout << res;
}
