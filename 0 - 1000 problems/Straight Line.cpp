#include <iostream>
using namespace std;
int main()
{
	long long x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	long long sum1, sum2;
	sum1 = (y2 - y1) * (x3 - x1);
	sum2 = (y3 - y1) * (x2 - x1);

	if (sum1 == sum2)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
