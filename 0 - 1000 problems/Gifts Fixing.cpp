#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,mn1 = INT_MAX, mn2 = INT_MAX;
		long long res = 0;
		cin >> n;
		vector<int>arr1(n), arr2(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i];
			mn1 = min(mn1, arr1[i]);
		}
		for (int i = 0; i < n; i++)
		{
			cin >> arr2[i];
			mn2 = min(mn2, arr2[i]);

		}
		for (int i = 0; i < n; i++)
		{
			res += max(arr1[i] - mn1, arr2[i] - mn2);
		}
		cout << res << endl;
	}
}