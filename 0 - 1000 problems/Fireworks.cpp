#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long x, y, z;
		cin >> x >> y >> z;
		cout << ((z / x) + (z / y) + 2) << endl;
	}
}