#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b,res = 0;
		cin >> a >> b;
		int x = min(a, b);
		int y = max(a, b);
		res += (y - x) / 10;
		if ((y - x) % 10 > 0)
		{
			res++;
		}
		cout << res << endl;
	}
}