#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	bool flag = true;
	while (x != 0 and y != 0)
	{
		x--;
		y--;
		if (flag)
		{
			flag = false;
		}
		else
		{
			flag = true;
		}
	}
	if (!flag)
	{
		cout << "Akshat";
	}
	else
	{
		cout << "Malvika";
	}
}