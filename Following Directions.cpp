#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string k;
		cin >> k;
		int x = 0, y = 0;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			if (k[i] == 'R')
			{
				x++;
			}
			else if (k[i] == 'U')
			{
				y++;
			}
			else if (k[i] == 'L')
			{
				x--;
			}
			else if (k[i] == 'D')
			{
				y--;
			}
			if (x == 1 && y == 1) {
				flag = true;
				break;
			}
		}
		if (flag)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}