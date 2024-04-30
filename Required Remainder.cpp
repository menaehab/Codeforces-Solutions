#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long x, y, z;
		cin >> x >> y >> z;
		if (z % x == y)
		{
			cout << z << endl;
		}
		else
		{
			int a = z % x,res;
			if (a > y)
			{
				res = z - (a - y);
				cout << res << endl;
			}
			else {
				res = z - a - (x - y);
				cout << res << endl;
			}
		}
	}
}