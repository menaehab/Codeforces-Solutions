#include <iostream>
using namespace std;
int main()
{
	int arr[4];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	int res = INT_MAX;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] < res)
		{
			res = arr[i];
		}
	}
	cout << res;
}
