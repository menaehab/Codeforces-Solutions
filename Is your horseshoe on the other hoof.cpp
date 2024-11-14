#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d,res = 0;
	cin >> a >> b >> c >> d;
	res = (a == b) + (a == c) + (a == d) + (b == c) + (b == d) + (c == d);
	if (res == 6)
	{
		res /= 2;
	}
	else
	{
		if (res == 3)
		{
			res--;
		}
	}
	cout << res ;
}
