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
		int mx1, mx2;
		vector<int> arr(4);
		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
		}
		int x = max(arr[0], arr[1]);
		int y = max(arr[2], arr[3]);
		sort(arr.begin(), arr.end(),greater<int>());
		mx1 = arr[0];
		mx2 = arr[1];
		if ( (x == mx1 && y == mx2) || (x == mx2 && y == mx1) )
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
