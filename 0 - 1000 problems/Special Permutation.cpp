#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;
		if (x == 3)
		{
			cout << "2 3 ";
		}
		else if (x % 2 == 0)
		{
			for (int i = x; i >= 2; i--)
			{
				cout << i << " ";
			}
		}
		else
		{
			for (int i = x; i >= 2; i--)
			{
				if (i != (x / 2) + 1)
				{
					cout << i << " ";
				}
			}
			cout << (x / 2) + 1 << " ";
		}
		cout << "1\n";
	}
}