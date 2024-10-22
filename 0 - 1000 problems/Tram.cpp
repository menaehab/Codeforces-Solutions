#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		sum -= x;
		sum += y;
		if (sum > max)
		{
			max = sum;
		}
	}
	cout << max;
}
