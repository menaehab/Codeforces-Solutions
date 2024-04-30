#include <iostream>
using namespace std;
int main()
{
	int n, x, min = 100000, pos = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x < min)
		{
			min = x;
			pos = i;
		}
	}
	cout << min << " " << pos + 1;
}
