#include <iostream>
using namespace std;
int main()
{
	double x, y, z, sum;
	cin >> x >> y >> z;
	sum = (x * y) / z;
	if (sum >= -2147483648 && sum <= 2147483648) {
		if (sum == int(sum))
		{
			cout << "int";
		}
		else
		{
			cout << "double";
		}
	}
	else
	{
		cout << "long long";
	}

}
