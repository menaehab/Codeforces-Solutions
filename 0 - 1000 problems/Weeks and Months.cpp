#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long t;
	cin >> t;
	while(t--)
	{
		long long x;
		cin >> x;
		cout << (x * 7) / 30 << "\n";
	}
}