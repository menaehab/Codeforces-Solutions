#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,mx = 0;
		cin >> n;
		string x;
		cin >> x;
		for (int i = 0; i < n; i++)
		{
			mx = max(mx, (x[i] - '0' - 48));
		}
		cout << mx << endl;
	}
}