#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		bool flag = true;
		int n;
		cin >> n;
		vector <int>arr(n + 1);
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			arr[x]++;
		}
		for (int i = 1; i <= n; i++)
		{
			if (arr[i] >= 3)
			{
				flag = false;
				cout << i << " ";
				break;
			}
		}
		if (flag)
		{
			cout << -1;
		}
		cout << endl;
	}
}