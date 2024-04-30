#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y, a, b;
	cin >> x >> y;
	b = (max(x, y) - min(x, y)) / 2;
	a = min(x, y);
	cout << a << " " << b;
}