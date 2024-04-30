#include <iostream>
using namespace std;
int main()
{
	int t, k;
	cin >> t >> k;
	bool flag = true;
	while (t--)
	{
		int a, b, c, d;
		cin >> a >> b;
		c = 7 - a, d = 7 - b;
		if (a == k || b == k || c == k || d == k)
		{
			flag = false;
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}