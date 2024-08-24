#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, sum = 0, res = 0, a = 0, b = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x % 3 == 1)
			{
				a = x;
			}
			else if (x % 3 == 2)
			{
				b = x;
			}
			sum += x;
		}
		int z = sum % 3;
		if (z == 0)
		{
			res = 0;
		}
		else if ((sum - a) % 3 == 0 || (sum - b) % 3 == 0 || z == 2)
		{
			res = 1;
		}
		else if (z == 1)
		{
			res = 2;
		}
		cout << res << endl;
	}
}