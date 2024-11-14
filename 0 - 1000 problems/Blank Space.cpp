#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
	while (t--)
	{
		int n, temp = 0, res = 0;
		cin >> n;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == 0)
			{
				temp++;
			}
			else if (arr[i] == 1)
			{
				res = max(res, temp);
				temp = 0;
			}
		}
		res = max(res, temp);
		cout << res << endl;
	}
}
