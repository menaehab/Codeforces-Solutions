#include <iostream>
using namespace std;
int main()
{
	int x, y, m, d;
	cin >> x;
	y = x / 365;
	m = (x - (365 * y)) / 30;
	d = (x % 365) % 30;
	if (y < 0)
	{
		y = 0;
	}
	else if (m < 0)
	{
		m = 0;
	}
	else if (d < 0) {
		d = 0;
	}
	cout << y << " years\n";
	cout << m << " months\n";
	cout << d << " days\n";
}