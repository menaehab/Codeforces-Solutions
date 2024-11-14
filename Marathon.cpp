#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, d, res = 0;
		cin >> a >> b >> c >> d;
		if (b > a)
		{
			res++;
		}
		if (c > a)
		{
			res++;
		}
		if (d > a)
		{
			res++;
		}
		cout << res << endl;
	}
}