#include <iostream>
using namespace std;
int main()
{
	int t,a = 0,b = 0;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		if (x > y)
		{
			a++;
		}
		else if (x < y)
		{
			b++;
		}
	}
	if (a > b)
	{
		cout << "Mishka";
	}
	else if (b > a)
	{
		cout << "Chris";
	}
	else {
		cout << "Friendship is magic!^^";
	}
}