#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (a <= b && a <= c) {
		cout << a << " ";
	}
	else if(b <= a && b <= c) {
		cout << b << " ";
	}
	else if (c <= b && c <= a) {
		cout << c << " ";
	}
	if (a >= b && a >= c) {
		cout << a;
	}
	else if (b >= a && b >= c) {
		cout << b;
	}
	else if (c >= b && c >= a) {
		cout << c;
	}
}
