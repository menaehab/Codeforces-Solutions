#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	string s, e;
	cin >> a >> s >> b >> e >> c;
	if (s == "+")
	{
		if (a + b == c) 
		{
			cout << "Yes";
		}
		else {
			cout << a + b;
		}
	}
	else if(s == "*")
	{
		if (a * b == c)
		{
			cout << "Yes";
		}
		else {
			cout << a * b;
		}
	}
	else if(s == "-")
	{
		if (a - b == c)
		{
			cout << "Yes";
		}
		else {
			cout << a - b;
		}
	}
}