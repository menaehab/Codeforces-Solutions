#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x % 2 == 1)
			{
				res++;
			}
		}
		if (res % 2 == 0)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}