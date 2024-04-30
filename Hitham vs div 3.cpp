#include <iostream>
using namespace std;
int main()
{
	double x, y,res;
	cin >> x >> y;
	res = x * (y / 100);
	cout.precision(6);
	cout << fixed << res;
}