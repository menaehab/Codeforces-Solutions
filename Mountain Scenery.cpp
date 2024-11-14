#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x, t,n;
	cin >> x >> t;
	n = (x * 2) + 1;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (x > 0 && t > 0)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				if (arr[i] - 1 > arr[i - 1] && arr[i] - 1 > arr[i + 1])
				{
					arr[i]--;
					x--;
					t--;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}