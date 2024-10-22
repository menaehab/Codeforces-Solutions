#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		long long res = 0;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] > b[i]) {
				swap(a[i], b[i]);
			}
		}
		for (int i = 0; i < n - 1; i++)
		{
			res += abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
		}
		cout << res << endl;
	}
}