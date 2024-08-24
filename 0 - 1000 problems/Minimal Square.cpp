#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		if (x < y)
		{
			x *= 2;
		}
		else {
			y *= 2;
		}
		int res = max(x, y) * max(x, y);
		cout << res << endl;
	}
}