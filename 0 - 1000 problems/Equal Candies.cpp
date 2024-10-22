#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, index = INT_MAX, res = 0;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			index =  min(index, arr[i]);
		}
		for (int i = 0; i < n; i++)
		{
			res += arr[i] - index;
		}
		cout << res << endl;
	}
}