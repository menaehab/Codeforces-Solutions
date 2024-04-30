#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && y + z > x && x + z > y) {
		cout << "Valid\n";
		double s = (x + y + z)/2;
		double res = sqrt(s * (s - x) * (s - y) * (s - z));
		cout << fixed << res;
	}
	else {
		cout << "Invalid";
	}
}