#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	float test = log2(x);
	if (test == int(test))
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
