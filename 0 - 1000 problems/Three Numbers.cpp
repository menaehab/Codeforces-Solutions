#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int res = 0;
	for (int i = 0; i <= x; i++)
	{
		for (int j = 0; j <= x; j++) {
			if (y-i-j>=0 && y-i-j<=x)
			{
				res++;
			}
		}
	}
	cout << res;
}
