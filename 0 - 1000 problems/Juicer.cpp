#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, x, y,res = 0,sum = 0;
	cin >> n >> x >> y;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (x >= arr[i])
		{
			sum += arr[i];
		}
		if (sum > y)
		{
			res++;
			sum = 0;
		}
	}
	cout << res;
}
