#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define in freopen("mosalah.in", "r", stdin);
#define out freopen("pow.out", "w", stdout);
using namespace std;
int main()
{
	speedup;
	in;
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, m, x, y, res = 0;
		cin >> n >> m >> x >> y;
		res = (((x + y) * n) - m);
		if (y == 0 && m < (x + y) * n)
		{
			cout << -1 << el;
		}
		else if ((x + y) * n < m)
		{
			cout << 0 << el;
		}
		else
		{
			cout << res << el;
		}
	}
}