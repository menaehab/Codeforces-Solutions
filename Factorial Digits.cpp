#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double x = 0;
	for (int i = 2; i <= n; i++)
	{
		x += log10(i);
	}
	long long res = int(x) + 1;
	cout << "Number of digits of " << n << "! is " << res;
}