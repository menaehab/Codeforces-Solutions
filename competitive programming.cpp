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
		int h1, m1, s1, h2, m2, s2;
		ll res1, res2;
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		res1 = h1 * 60 * 60 + m1 * 60 + s1;
		res2 = h2 * 60 * 60 + m2 * 60 + s2;
		if (res1 > res2)
		{
			cout << "Player2" << el;
		}
		else if (res1 < res2)
		{
			cout << "Player1" << el;
		}
		else
		{
			cout << "Tie" << el;
		}
	}
}