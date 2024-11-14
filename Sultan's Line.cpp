#include <iostream>
using namespace std;
const double pi = 3.141592653;
int main()
{
	long long x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	long long t1 = (x2 - x1) * (y3 - y2);
	long long t2 = (x3 - x2) * (y2 - y1);
	if (t1 == t2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}