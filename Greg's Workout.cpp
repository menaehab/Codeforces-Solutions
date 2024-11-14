#include <iostream>
using namespace std;
int main()
{
	int t,n,x = 0,y = 0,z = 0;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		if (i % 3 == 1)
		{
			x+=n;
		}
		else if (i % 3 == 2)
		{
			y += n;
		}
		else
		{
			z += n;
		}
	}
	if (max(max(x,y),z) == x)
	{
		cout << "chest";
	}
	else if (max(max(x, y), z) == y)
	{
		cout << "biceps";
	}
	else
	{
		cout << "back";
	}
}