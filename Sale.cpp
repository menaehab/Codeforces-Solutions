#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int x, y,res = 0,test;
	cin >> x >> y;
	int arr[1005];
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + x);
	for (int i = 0; i < x; i++)
	{
		if (arr[i] < 0 && y != 0)
		{
			res += abs(arr[i]);
			y--;
		}
	}
	cout << res;
}
