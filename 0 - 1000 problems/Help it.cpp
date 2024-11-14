#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long x, y,n;
		cin >> x >> y;
		long long res = 0;
		n = max(x,y) - min(x,y) + 1;
		res = (n * (x + y)) / 2;
		cout << res << endl;
	}
}
