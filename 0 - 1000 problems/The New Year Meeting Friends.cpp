#include <iostream>
using namespace std;
int main()
{
	int x, y, z, mn, mx, md, res = 0;
	cin >> x >> y >> z;
	if (min(x, y) < z && z < max(x, y))
	{
		mn = min(x, y);
		mx = max(x, y);
		md = z;
		res += z - mn;
		res += mx - z;
		cout << res;
	}
	else if (min(z, y) < x && x < max(z, y))
	{
		mn = min(z, y);
		mx = max(z, y);
		md = x;
		res += z - mn;
		res += mx - z;
		cout << res;

	}
	else if (min(z, x) < y && y < max(z, x))
	{
		mn = min(z, x);
		mx = max(z, x);
		md = y;
		res += z - mn;
		res += mx - z;
		cout << res;
	}
}