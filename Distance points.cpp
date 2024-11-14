#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, d,res;
	cin >> a >> b >> c >> d;
	res = sqrt(pow(a - c, 2) + pow(b - d, 2));
	if (res < 0.000001)
	{
		cout << 0.000001;
	}
	else {
		cout.precision(9);
		cout << fixed << res;
	}
}
