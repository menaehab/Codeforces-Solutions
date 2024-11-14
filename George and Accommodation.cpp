#include <iostream>
using namespace std;
int main()
{
	int t, res = 0;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		if (y - x >= 2)
		{
			res++;
		}
	}
	cout << res;
}
