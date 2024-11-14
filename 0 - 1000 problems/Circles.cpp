#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4, a, b, c, d, r1, r2, z, sum;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	a = (x1 + x2) / 2;
	b = (y1 + y2) / 2;
	c = (x3 + x4) / 2;
	d = (y3 + y4) / 2;
	r1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;
	r2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2;
	z = sqrt(pow(a - c, 2) + pow(b - d, 2));
	sum = r1 + r2;
	if (z > sum) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
}
