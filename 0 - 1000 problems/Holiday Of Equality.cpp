#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,mx = -1, res = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > mx)
		{
			mx = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (mx > arr[i])
		{
			res += mx - arr[i];
		}
	}
	cout << res;
}
