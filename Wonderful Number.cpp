#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;
bool Iseven(int n) {
	if (n % 2 == 0)
	{
		return true;
	}
	else {
		return false;
	}
}
bool binary(int n) {
	int a;
	string n1, n2;
	while (n)
	{
		a = n % 2;
		n = n / 2;
		if (a==0)
		{
			n1 += "0";
		}
		else {
			n1 += "1";
		}
	}
	n2 = n1;
	reverse(n2.begin(), n2.end());
	if (n1==n2)
	{
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	int x;
	cin >> x;
	if (Iseven(x))
	{
		cout << "NO";
	}
	else {
		if (binary(x))
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}
