#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,index = 0;
		cin >> n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		index = min_element(arr.begin(), arr.end()) - arr.begin();
		arr[index]++;
		int res = 1;
		for (int i = 0; i < n; i++)
		{
			res *= arr[i];
		}
		cout << res << endl;
	}
}