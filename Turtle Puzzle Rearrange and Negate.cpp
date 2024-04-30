#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long res = 0;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			x = abs(x);
			res += x;
		}
		cout << res << endl;
	}
}