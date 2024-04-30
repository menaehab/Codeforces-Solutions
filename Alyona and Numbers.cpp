#include <iostream>
using namespace std;
int main()
{
	long long x, y,res = 0,z = 0;
	cin >> x >> y;
	for (long long i = 1; i <= x; i++)
	{
		z = i % 5;
		z = (y + z) / 5;
		res += z;
	}
	cout << res;
}