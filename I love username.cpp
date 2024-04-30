#include <iostream>
using namespace std;
int main()
{
	int n, min = 0, max = -1, res = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x > max && max == -1 && min == 0)
		{
			max = x;
			min = x;

		}
		else if (x > max)
		{
			max = x;
			res++;
		}
		else if (x < min)
		{
			min = x;
			res++;
		}
	}
	cout << res;
}