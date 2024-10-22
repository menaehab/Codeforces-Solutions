#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int z = 6 - max(x, y) + 1;
	if (z == 1)
	{
		cout << "1/6";
	}
	else if (z == 2)
	{
		cout << "1/3";
	}
	else if (z == 3)
	{
		cout << "1/2";
	}
	else if (z == 4)
	{
		cout << "2/3";
	}
	else if (z == 5)
	{
		cout << "5/6";
	}
	else if (z == 6)
	{
		cout << "1/1";
	}
}
