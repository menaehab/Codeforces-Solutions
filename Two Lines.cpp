#include <iostream>
using namespace std;
int main()
{
	long long x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	long long sum1, sum2;
	sum1 = (y2 - y1) * (x4 - x3);
	sum2 = (y4 - y3) * (x2 - x1);
	if (sum1 == sum2)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
