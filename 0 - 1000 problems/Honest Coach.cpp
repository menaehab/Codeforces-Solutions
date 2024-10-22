#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,res = INT_MAX;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end(),greater<int>());
		for (int i = 0; i < n - 1; i++)
		{
			res = min(res, (arr[i] - arr[i + 1]));
		}
		cout << res << endl;
	}
}