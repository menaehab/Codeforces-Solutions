#include <iostream>
using namespace std;
int main()
{
	long long x, y, z;
	cin >> x >> y >> z;
	cout << (x + y - z) / 2 << " " << (x + z - y) / 2 << " " << (y + z - x) / 2;
}