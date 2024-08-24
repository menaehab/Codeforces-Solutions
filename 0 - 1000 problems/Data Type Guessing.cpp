#include <iostream>
using namespace std;
int main()
{
	double x, y, z;
	cin >> x >> y >> z;
	double res = (x * y)/z;
	long long q = res;
	double a = res - q;
	if (a != 0) {
		cout << "double";
	}
	else {
		if (q > 2147483649) {
			cout << "long long";
		}
		else {
			cout << "int";
		}
	}
}
