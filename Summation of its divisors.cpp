#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long x;
	cin >> x;
	long long sum = 0;
	for (int i = 1; i <= sqrt(x); i++)
	{
		if (x % i == 0) {
			sum += i;
			if (i != sqrt(x))
			{
				sum += x / i;
			}
		}
	}
	cout << sum;
}