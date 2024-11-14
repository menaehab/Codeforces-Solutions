#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int na = a % 100;
	int nb = b % 100;
	int nc = c % 100;
	int nd = d % 100;
	int r = (na * nb * nc * nd) % 100;
	if (r <= 9) {
		cout << "0" << r;
	}
	else {
		cout << r;
	}
}
