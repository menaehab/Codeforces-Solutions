#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, k,x = 0,res = 0;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), greater<int>());
	for (int i = 0; i < n; i++)
	{
		if (arr[i] + k <= 5)
		{
			x++;
			if (x == 3)
			{
				res++;
				x = 0;
			}
		}
	}
	cout << res;
}
