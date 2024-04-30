#include <iostream>
using namespace std;
int main()
{
	long long x, y;
	char s;
	cin >> x >> s >> y;
	if (s == '+')
	{
		cout << x + y;
	}
	else if (s == '*')
	{
		cout << x * y;
	}
	else if (s == '/')
	{
		cout << x / y;
	}
	else if (s == '-')
	{
		cout << x - y;
	}
}