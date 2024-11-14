#include <iostream>
using namespace std;
int main()
{
	int n = 1, m = 1;
	while (m > 0 && n > 0)
	{
		cin >> n >> m;
		if (m <= 0 || n <= 0)
		{
			return 0;
		}
		int big = max(m, n);
		int small = min(m, n);
		for (int j = small; j <= big; j++)
		{
			cout << j << " ";
		}
		int x = big - small + 1;
		cout << "sum =" << x * (big + small) / 2 << endl;
	}
}
