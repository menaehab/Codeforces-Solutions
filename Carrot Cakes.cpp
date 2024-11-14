#include <iostream>
using namespace std;
int main()
{
	int n, t, k, d, x, y;
	cin >> n >> t >> k >> d;
	y = d + t;
	if (n % k == 0)
	{
		x = (n / k) * t;
	}
	else
	{
		x = ((n / k) + 1) * t;
	}
	if (x > y)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}