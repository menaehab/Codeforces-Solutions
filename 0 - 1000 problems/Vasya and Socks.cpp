#include <iostream>
using namespace std;
int main()
{
	int x, y,res = 0;
	cin >> x >> y;
	while (x > 0)
	{
		x--;
		res++;
		if (res % y == 0)
		{
			x++;
		}
	}
	cout << res;
}