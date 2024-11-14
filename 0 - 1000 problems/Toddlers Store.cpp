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
	int t;
	cin >> t;
	while (t--)
	{
		ll n, k,mx,sum;
		cin >> n >> k;
		bool flag = true;
		vector<ll>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		mx = arr[0];
		for (int i = 1; i < n; i++)
		{
			sum = arr[i] + mx;
			if (mx > arr[i])
			{
				if (sum > k)
				{
					flag = false;
					break;
				}
			}
			mx = max(mx, arr[i]);
		}
		if (flag)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}