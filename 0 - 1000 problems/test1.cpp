#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,l = 0,r = 0;
	cin >> n;
	string x;
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (x[i] == 'L')
		{
			l++;
		}
		else if (x[i] == 'R')
		{
			r++;
		}
	}
	if (l > r)
	{
		if (x[0] == 'L')
		{
			cout << r;
		}
		else if (r == 1)
		{
			cout << 1;
		}
		else if (r == 0)
		{
			cout << 0;
		}
		else {
			cout << r - 1;
		}
	}
	else if(l < r)
	{
		if (x[n - 1] == 'R')
		{
			cout << l;
		}
		else if (l == 1)
		{
			cout << 1;
		}
		else if (l == 0)
		{
			cout << 0;
		}
		else {
			cout << l - 1;
		}
	}
	else
	{
		if (x[0] == 'L') {
			cout << l - 1;
		}
		else if (x[n - 1] == 'R')
		{
			cout << r - 1;
		}
	}
}
