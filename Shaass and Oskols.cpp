#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>arr(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	int t;
	cin >> t;
	while (t--)
	{
		int x, y,u,d;
		cin >> x >> y;
		u = arr[x] - y;
		d = y - 1;
		arr[x] = 0;
		if (x + 1 <= n)
		{
			arr[x + 1] += u;
		}
		if (x - 1 > 0)
		{
			arr[x - 1] += d;

		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << endl;
	}
		
}