#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	int price = 0;
	for (int i = 1; i <= z; i++)
	{
		price += x * i;
	}
	if (y >= price)
	{
		cout << 0;
	}
	else {
		cout << price - y;
	}
}
