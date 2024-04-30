#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		string x,y;
		cin >> n >> x >> y;
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			if (x[i] != y[i] && (x[i] == 'R' || y[i] == 'R')) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

	}
}
