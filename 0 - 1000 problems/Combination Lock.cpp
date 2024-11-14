#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,res = 0,sum;
	string x, y;
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++)
	{
		if (x[i] != y[i])
		{
			sum = abs((x[i] - '0') - (y[i] - '0'));
			res += min(sum,10 - sum);
		}
	}
	cout << res;
}