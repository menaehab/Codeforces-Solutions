#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y;
	z = x + y;
	if (z % 2 ==0)
	{
		cout << "even";
	}
	else {
		cout << "odd";
	}
}
