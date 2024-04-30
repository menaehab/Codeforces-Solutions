#include <iostream>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int arr[1005];
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr[i] = a;
	}
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= x)
		{
			res++;
		}
		else {
			res += 2;
		}
	}
	cout << res;
}
