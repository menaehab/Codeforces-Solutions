#include <iostream>
using namespace std;
int main()
{
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	int res1, res2, res3, res4;
	bool flag = false;
	for (res1 = 1; res1 <= 9; res1++)
	{
		for (res2 = 1; res2 <= 9; res2++)
		{
			for (res3 = 1; res3 <= 9; res3++)
			{
				for (res4 = 1; res4 <= 9; res4++)
				{
					if (res1 != res2 && res1 != res3 && res1 != res4 && res2 != res3 && res2 != res4 && res3 != res4)
					{
						if (res1 + res2 == r1 && res1 + res3 == c1 && res1 + res4 == d1 && res2 + res4 == c2 && res2 + res3 == d2 && res3 + res4 == r2)
						{
							flag = true;
							break;
						}
					}
				}
				if (flag)
				{
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}
	if (flag)
	{
		cout << res1 << " " << res2 << endl << res3 << " " << res4;
	}
	else
	{
		cout << -1;
	}
}