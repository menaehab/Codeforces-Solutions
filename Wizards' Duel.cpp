#include <iostream>
using namespace std;
int main()
{
	float x, y, z,res;
	cin >> x >> y >> z;
	res = (y / (z + y)) * x;
	cout << res;
}