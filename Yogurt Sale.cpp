#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, y,res = 0;
		cin >> n >> x >> y;
		if (2*x > y)
		{
			if (n >= 2)
			{
				res = (n / 2) * y;
				n %= 2;
			}
			res += x * n;
		}
		else
		{
			res += x * n;
		}
		cout << res << endl;
	}
}