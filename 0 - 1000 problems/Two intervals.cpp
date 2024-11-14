#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if ((a2 > b1 && b2 > b1) || (a2 < a1 && b2 < a1)) {
		cout << -1;
	}
	else
	{
		int x, y;
		x = max(a1, a2);
		y = min(b1, b2);
		cout << x << " " << y;
	}
}
