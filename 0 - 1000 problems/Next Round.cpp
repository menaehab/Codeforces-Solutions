#include <iostream>
using namespace std;
int main()
{
	short n, k, counter = 0;
	cin >> n >> k;
	short a [50];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= a[k - 1] && a[i] > 0)
		{
			counter++;
		}
	}
	cout << counter;
}