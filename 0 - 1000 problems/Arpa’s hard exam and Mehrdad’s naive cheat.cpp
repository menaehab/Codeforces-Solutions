#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 1;
	}
	else
	{
		n %= 4;
		if (n == 0)
		{
			cout << 6;
		}
		else if (n == 3)
		{
			cout << 2;
		}
		else if (n == 2)
		{
			cout << 4;
		}
		else if (n == 1)
		{
			cout << 8;
		}
	}
}