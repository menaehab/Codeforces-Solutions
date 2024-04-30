#include <iostream>
using namespace std;
int main()
{
	long long x, y;
	cin >> x >> y;
	if (y - x < 2)
	{
		cout << -1;
		return 0;
	}
	else
	{
		if (x % 2 == 0)
		{
			cout << x << " ";
			x++;
			cout << x << " ";
			x++;
			cout << x;
		}
		else if (x % 2 != 0 && y - x > 2)
		{
			x++;
			cout << x << " ";
			x++;
			cout << x << " ";
			x++;
			cout << x;
		}
		else
		{
			cout << -1;
		}
	}
}