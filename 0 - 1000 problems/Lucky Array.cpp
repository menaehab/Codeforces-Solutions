#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1005];
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
	}
	int mini = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (arr[i] < mini)
			mini = arr[i];
	}
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (mini == arr[i])
		{
			res++;
		}
	}
	if (res % 2 == 0)
	{
		cout << "Unlucky";
	}
	else
	{
		cout << "Lucky";
	}
}