#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		sum += x;
	}
	cout << abs(sum);
}
