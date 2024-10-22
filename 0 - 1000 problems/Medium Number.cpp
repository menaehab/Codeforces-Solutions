#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if (min(x,y) < z && z < max(x,y))
		{
			cout << z << endl;
		}
		else if (min(z,y) < x && x < max(z,y))
		{
			cout << x << endl;

		}
		else if (min(z, x) < y && y < max(z, x))
		{
			cout << y << endl;
		}
	}
}