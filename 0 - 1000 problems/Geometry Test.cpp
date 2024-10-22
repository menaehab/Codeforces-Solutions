#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long x, y;
	cin >> x >> y;
	if (y >= x * 2) {
		cout << "Square";
	}
	else if (x * 2 > sqrt(pow(y, 2) + pow(y, 2))) {
		cout << "Circle";
	}
	else {
		cout << "Complex";
	}
}