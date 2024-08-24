#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "NO";
		return 0;
	}
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			cout << arr[i];
			return 0;
		}
	}
	cout << "NO";
}