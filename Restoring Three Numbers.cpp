#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, x, y, z;
	cin >> a >> b >> c >> d;
	int mx = max(d, max(c, max(a, b)));
	if (mx == a)
	{
		x = mx - b;
		y = mx - c;
		z = mx - d;
		cout << x << " " << y << " " << z;
	}
	else if(mx == b) {
		x = mx - a;
		y = mx - c;
		z = mx - d;
		cout << x << " " << y << " " << z;
	}
	else if (mx == c) {
		x = mx - a;
		y = mx - b;
		z = mx - d;
		cout << x << " " << y << " " << z;
	}
	else if (mx == d) {
		x = mx - a;
		y = mx - c;
		z = mx - b;
		cout << x << " " << y << " " << z;
	}
}