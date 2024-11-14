#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y, z, k, sum, mx;
		cin >> x >> y >> z >> k;
		sum = x + y + z + k;
		mx = max(x, max(y, z));
		if (sum % 3 == 0 && k >= mx - x + mx - y + mx - z)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
