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
	ll n,res = 0;
	cin >> n;
	vector<ll>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= 5)
		{
			res += 5 - arr[i];
		}
		else if (arr[i] <= 103 && arr[i] > 5)
		{
			res += min(103 - arr[i], abs(arr[i] - 5));
		}
		else if (arr[i] <= 320 && arr[i] > 103)
		{
			res += min(320 - arr[i], abs(arr[i] - 103));
		}
		else if (arr[i] <= 1122 && arr[i] > 320)
		{
			res += min(1122 - arr[i], abs(arr[i] - 320));
		}
		else if (arr[i] <= 7000 && arr[i] > 1122)
		{
			res += min(7000 - arr[i], abs(arr[i] - 1122));
		}
		else if (arr[i] <= 9120 && arr[i] > 7000)
		{
			res += min(9120 - arr[i], abs(arr[i] - 7000));
		}
		else if (arr[i] <= 51345 && arr[i] > 9120)
		{
			res += min(51345 - arr[i], abs(arr[i] - 9120));
		}
		else
		{
			res += abs(arr[i] - 51345);
		}
	}
	cout << res;
}