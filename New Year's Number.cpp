#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		bool flag = false;
		int x,y;
		cin >> x;
		y = x;
		if (x >= 2020)
		{
			if (x / 2020 >= x % 2020)
			{
				flag = true;
			}
		}	
		if (flag)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}