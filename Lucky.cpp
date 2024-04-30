#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string x;
		cin >> x;
		int res1, res2;
		res1 = (x[0] - '0') + (x[1] - '0') + (x[2] - '0');
		res2 = (x[3] - '0') + (x[4] - '0') + (x[5] - '0');
		if (res1 == res2)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
