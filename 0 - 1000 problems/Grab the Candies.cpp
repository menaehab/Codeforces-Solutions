#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, even = 0, odd = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x % 2 == 0)
			{
				even += x;
			}
			else
			{
				odd += x;
			}

		}
		if (even > odd)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}