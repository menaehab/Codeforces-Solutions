#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, z,a,b;
		cin >> x >> y >> z;
		if (x + y >= 10 || x+z >= 10 || y + z >= 10)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
