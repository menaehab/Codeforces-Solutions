#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string txt;
	cin >> txt;
	string res = txt;
	string x, y;
	int n = txt.size();
	for (int i = 0; i < n-1; i++)
	{
		x.push_back(txt[i]);
		y = txt.substr(i + 1, n - i);
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		res = min(res, x + y);
	}
	cout << res;
}
