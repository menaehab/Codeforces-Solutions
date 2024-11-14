#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long x,res = 0;
		cin >> x;
		if (x > 2)
		{
			if (x % 2 == 0)
			{
				res = (x / 2) - 1;
			}
			else {
				res = x / 2;
			}
		}
		cout << res << endl;

	}
}
