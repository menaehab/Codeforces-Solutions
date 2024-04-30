#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, even = 0, odd = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x % 2 != i % 2)
			{
				if (x % 2 == 0)
				{
					even++;
				}
				else {
					odd++;
				}
			}
		}
		if (even == odd)
		{
			cout << even << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}