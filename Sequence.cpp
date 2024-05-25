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
using namespace std;
int main()
{
	speedup;
	ll n, x = 2, y = 1, z = 0,res = 0;
	cin >> n;
	while (x <= n)
	{
		if (x % 2 == 0)
		{
			res += x;
		}
		z = x + y;
		y = x;
		x = z;
	}
	cout << res;
}