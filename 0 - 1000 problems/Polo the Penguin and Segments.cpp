#include <iostream>
using namespace std;
int main()
{
	int n, k,sum = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		sum += y - x + 1;
	}
	if (sum % k == 0)
	{
		cout << 0;
	}
	else
	{
		cout << k - (sum % k);
	}
}