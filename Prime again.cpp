#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	for (int i = 2; i <= x; i++)
	{
		if (x <= 0)
		{
			break;
		}
		bool flag = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			if (x >= i)
			{
				x -= i;
				n--;
			}
			if (n == 0)
			{
				break;
			}
		}
	}
	if (n == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}