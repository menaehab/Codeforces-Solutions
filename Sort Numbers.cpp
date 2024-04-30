#include <iostream>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	int max, min, mid;
	if (x >= y && x >= z)
	{
		max = x;
		if (y >= z)
		{
			mid = y;
			min = z;
		}
		else {
			mid = z;
			min = y;
		}
	}
	else if (y >= x && y >= z)
	{
		max = y;
		if (x >= z)
		{
			mid = x;
			min = z;
		}
		else {
			mid = z;
			min = x;
		}
	}
	else {
		max = z;
		if (x >= y)
		{
			mid = x;
			min = y;
		}
		else 
		{
			mid = y;
			min = x;
		}
	}
	cout << min << endl << mid << endl << max << endl << endl << x << endl << y << endl << z;
}