#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long x, y, z;
	cin >> x >> y >> z;
	long long n1 = ceil((double)x / z);
	long long n2 = ceil((double)y / z);
	cout << n1 * n2;
}
