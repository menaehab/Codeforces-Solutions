#include <iostream>
#include <iomanip>
using namespace std;
int main() {

	cout << fixed << setprecision(6);
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	float x = a * d;
	float y = (b - d) * c;
	float z = (b - d) * (a - c) * .5;
	cout << x + y + z;
}