#include <iostream>
using namespace std;
int main()
{
	long long t, sum,count = 0;
	cin >> t >> sum;
	while (t--)
	{
		long long x;
		char k;
		cin >> k >> x;
		if (k == '+')
		{
			sum += x;
		}
		else
		{
			if (sum >= x)
			{
				sum -= x;
			}
			else
			{
				count++;
			}
		}
	}
	cout << sum << " " << count << endl;
}
