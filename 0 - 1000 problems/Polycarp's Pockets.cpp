#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,mx = 0;
	cin >> n;
	vector<int>freq(101,0);
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		freq[x]++;
		mx = max(mx, freq[x]);
	}
	cout << mx;
}