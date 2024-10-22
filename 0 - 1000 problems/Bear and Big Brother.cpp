#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int res = 0;
	while (y > x) {
		res += 1;
		x *= 3;
		y *= 2;
	}
	if (y >= x)
	{
		res += 1;
	}
	cout << res;
}
