#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, z,res = 1;
		cin >> x >> y >> z;
		while (x % 2 == 0 || y % 2 == 0)
		{
			if (x % 2 == 0)
			{
				x /= 2;
				res *= 2;
			}
			else if (y % 2 == 0)
			{
				y /= 2;
				res *= 2;
			}
		}
		if (res >= z)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
