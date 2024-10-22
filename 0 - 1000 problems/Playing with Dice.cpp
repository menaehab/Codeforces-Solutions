#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y,res1 = 0,res2 = 0,res3 = 0;
	cin >> x >> y;
	for (int i = 1; i <= 6; i++)
	{
		int p1, p2;
		p1 = abs(x - i);
		p2 = abs(y - i);
		if (p1 > p2)
		{
			res1++;
		}
		else if (p1 == p2)
		{
			res2++;
		}
		else if (p2 > p1)
		{
			res3++;
		}
	}
	cout << res3 << " " << res2 << " " << res1;
}
