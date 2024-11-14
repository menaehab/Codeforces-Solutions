#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x,res = 0;
		cin >> x;
		bool flag = false, test = true;
		while (true)
		{
			if (x % 6 == 0)
			{
				while (x % 6 == 0)
				{
					x /= 6;
					res++;
					test = true;
				}
			}
			else
			{
				if (x == 1)
				{
					flag = true;
					break;
				}
				else if (test)
				{
					x *= 2;
					res++;
					test = false;
				}
				else
				{
					flag = false;
					break;
				}
			}
		}
		if (flag)
		{
			cout << res << endl;
		}
		else
		{
			cout << "-1\n";
		}
	}
}