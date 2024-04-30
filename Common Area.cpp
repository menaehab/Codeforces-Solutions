#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long x1, y1, x2, y2, x3, y3, x4, y4,a,b,c,d, z;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> z;
	a = min(min(x1, x2), min(x3, x4));
	b = max(max(x1, x2), max(x3, x4));
	c = min(min(y1, y2), min(y3, y4));
	d = max(max(y1, y2), max(y3, y4));
	for (int i = 0; i < z; i++) {
		long long x, y;
		cin >> x >> y;
		if (x >= a && x <= b && y >= c && y <= d) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}