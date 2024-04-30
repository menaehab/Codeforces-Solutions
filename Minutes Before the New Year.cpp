#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y,res;
		cin >> x >> y;
		res = (23 - x) * 60;
		res += 60 - y;
		cout << res << endl;
	}
}
