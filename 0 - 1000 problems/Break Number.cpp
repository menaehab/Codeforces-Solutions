#include <iostream>
using namespace std;
int main()
{
	long long n,x,test = 0,sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		while (x % 2 ==0)
		{
			test++;
			x = x / 2;
		}
		if (test > sum)
		{
			sum = test;
		}
		test = 0;
	}
	cout << sum;
}
