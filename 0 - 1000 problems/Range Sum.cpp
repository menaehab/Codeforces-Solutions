#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long x, y, sum = 0;
	for (long long i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (x>y)
		{
			swap(x, y);
		}
		long long number = y - x + 1;
		sum = (number * (x + y)) / 2;
		cout << sum << endl;
		sum = 0;
	}
}