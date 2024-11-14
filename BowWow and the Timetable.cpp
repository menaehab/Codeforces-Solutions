#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	cin >> x;
	long long res = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '1')
		{
			res++;
		}
	}
	if (res > 1)
	{
		cout << (1+x.size()) / 2;
	}
	else
	{
		cout << x.size() / 2;
	}
}